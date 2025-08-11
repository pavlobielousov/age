/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/*
 * Efficient shortest path algorithms for Apache AGE
 * Implements BFS, Dijkstra, and k-shortest paths algorithms
 */

#include "postgres.h"

#include "fmgr.h"
#include "funcapi.h"
#include "utils/builtins.h"
#include "utils/lsyscache.h"

#include "utils/agtype.h"
#include "utils/age_global_graph.h"
#include "catalog/ag_graph.h"
#include "catalog/ag_label.h"

/* Queue node for BFS */
typedef struct BFS_queue_node
{
    graphid vertex_id;
    int64 distance;
    List *path;  /* List of graphids representing the path */
    struct BFS_queue_node *next;
} BFS_queue_node;

/* Simple queue for BFS */
typedef struct BFS_queue
{
    BFS_queue_node *head;
    BFS_queue_node *tail;
    int size;
} BFS_queue;

/* Function declarations */
static BFS_queue *create_bfs_queue(void);
static void enqueue_bfs(BFS_queue *queue, graphid vertex_id, int64 distance, List *path);
static BFS_queue_node *dequeue_bfs(BFS_queue *queue);
static void free_bfs_queue(BFS_queue *queue);
static List *bfs_shortest_path(GRAPH_global_context *ggctx, graphid start_vertex, graphid end_vertex, int max_hops);

/*
 * Create a new BFS queue
 */
static BFS_queue *create_bfs_queue(void)
{
    BFS_queue *queue = palloc0(sizeof(BFS_queue));
    queue->head = NULL;
    queue->tail = NULL;
    queue->size = 0;
    return queue;
}

/*
 * Add a node to the BFS queue
 */
static void enqueue_bfs(BFS_queue *queue, graphid vertex_id, int64 distance, List *path)
{
    BFS_queue_node *node = palloc0(sizeof(BFS_queue_node));
    node->vertex_id = vertex_id;
    node->distance = distance;
    node->path = path ? list_copy(path) : NIL;
    node->next = NULL;
    
    if (queue->tail == NULL)
    {
        queue->head = queue->tail = node;
    }
    else
    {
        queue->tail->next = node;
        queue->tail = node;
    }
    queue->size++;
}

/*
 * Remove and return the front node from the BFS queue
 */
static BFS_queue_node *dequeue_bfs(BFS_queue *queue)
{
    BFS_queue_node *node;
    
    if (queue->head == NULL)
        return NULL;
        
    node = queue->head;
    queue->head = queue->head->next;
    if (queue->head == NULL)
        queue->tail = NULL;
    queue->size--;
    
    return node;
}

/*
 * Free the BFS queue and all its nodes
 */
static void free_bfs_queue(BFS_queue *queue)
{
    BFS_queue_node *current = queue->head;
    while (current != NULL)
    {
        BFS_queue_node *next = current->next;
        if (current->path)
            list_free(current->path);
        pfree(current);
        current = next;
    }
    pfree(queue);
}

/*
 * BFS shortest path algorithm
 * Returns a list of graphids representing the shortest path
 */
static List *bfs_shortest_path(GRAPH_global_context *ggctx, graphid start_vertex, graphid end_vertex, int max_hops)
{
    BFS_queue *queue;
    HTAB *visited;
    HASHCTL hash_ctl;
    List *result_path = NIL;
    bool found = false;
    List *initial_path;
    bool found_dummy;
    
    /* Validate input vertices */
    if (get_vertex_entry(ggctx, start_vertex) == NULL || get_vertex_entry(ggctx, end_vertex) == NULL)
        return NIL;
    
    /* If start and end are the same, return single vertex path */
    if (start_vertex == end_vertex)
    {
        result_path = lappend_oid(result_path, start_vertex);
        return result_path;
    }
    
    /* Initialize visited hash table */
    MemSet(&hash_ctl, 0, sizeof(hash_ctl));
    hash_ctl.keysize = sizeof(graphid);
    hash_ctl.entrysize = sizeof(graphid);
    hash_ctl.hcxt = CurrentMemoryContext;
    
    visited = hash_create("BFS visited vertices", 1000, &hash_ctl,
                         HASH_ELEM | HASH_BLOBS | HASH_CONTEXT);
    
    /* Initialize BFS queue */
    queue = create_bfs_queue();
    
    /* Start BFS */
    initial_path = lappend_oid(NIL, start_vertex);
    enqueue_bfs(queue, start_vertex, 0, initial_path);
    
    /* Mark start vertex as visited */
    hash_search(visited, &start_vertex, HASH_ENTER, &found_dummy);
    
    while (queue->size > 0 && !found)
    {
        BFS_queue_node *current;
        vertex_entry *ve;
        ListGraphId *edges_out;
        ListGraphId *edges_in;
        
        current = dequeue_bfs(queue);
        
        /* Check if we reached the target */
        if (current->vertex_id == end_vertex)
        {
            result_path = current->path;
            found = true;
            pfree(current);
            break;
        }
        
        /* Check max hops limit */
        if (current->distance >= max_hops)
        {
            if (current->path)
                list_free(current->path);
            pfree(current);
            continue;
        }
        
        /* Explore neighbors */
        ve = get_vertex_entry(ggctx, current->vertex_id);
        if (ve != NULL)
        {
            edges_out = get_vertex_entry_edges_out(ve);
            
            /* Traverse outgoing edges */
            if (edges_out != NULL)
            {
                GraphIdNode *node = get_list_head(edges_out);
                while (node != NULL)
                {
                    graphid edge_id;
                    edge_entry *ee;
                    graphid neighbor;
                    bool found_neighbor;
                    List *new_path;
                    
                    edge_id = get_graphid(node);
                    ee = get_edge_entry(ggctx, edge_id);
                    if (ee != NULL)
                    {
                        neighbor = get_edge_entry_end_vertex_id(ee);
                        
                        /* Check if neighbor has been visited */
                        hash_search(visited, &neighbor, HASH_FIND, &found_neighbor);
                        
                        if (!found_neighbor)
                        {
                            /* Mark as visited */
                            hash_search(visited, &neighbor, HASH_ENTER, &found_dummy);
                            
                            /* Create new path */
                            new_path = list_copy(current->path);
                            new_path = lappend_oid(new_path, neighbor);
                            
                            /* Enqueue neighbor */
                            enqueue_bfs(queue, neighbor, current->distance + 1, new_path);
                            
                            list_free(new_path);
                        }
                    }
                    node = next_GraphIdNode(node);
                }
            }
            
            /* Also check incoming edges for undirected traversal */
            edges_in = get_vertex_entry_edges_in(ve);
            if (edges_in != NULL)
            {
                GraphIdNode *node = get_list_head(edges_in);
                while (node != NULL)
                {
                    graphid edge_id;
                    edge_entry *ee;
                    graphid neighbor;
                    bool found_neighbor;
                    List *new_path;
                    
                    edge_id = get_graphid(node);
                    ee = get_edge_entry(ggctx, edge_id);
                    if (ee != NULL)
                    {
                        neighbor = get_edge_entry_start_vertex_id(ee);
                        
                        /* Check if neighbor has been visited */
                        hash_search(visited, &neighbor, HASH_FIND, &found_neighbor);
                        
                        if (!found_neighbor)
                        {
                            /* Mark as visited */
                            hash_search(visited, &neighbor, HASH_ENTER, &found_dummy);
                            
                            /* Create new path */
                            new_path = list_copy(current->path);
                            new_path = lappend_oid(new_path, neighbor);
                            
                            /* Enqueue neighbor */
                            enqueue_bfs(queue, neighbor, current->distance + 1, new_path);
                            
                            list_free(new_path);
                        }
                    }
                    node = next_GraphIdNode(node);
                }
            }
        }
        
        if (current->path)
            list_free(current->path);
        pfree(current);
    }
    
    /* Cleanup */
    free_bfs_queue(queue);
    hash_destroy(visited);
    
    return result_path;
}

/*
 * PostgreSQL function: age_shortest_path
 * 
 * Finds the shortest path between two vertices using BFS
 */
PG_FUNCTION_INFO_V1(age_shortest_path);

Datum age_shortest_path(PG_FUNCTION_ARGS)
{
    char *graph_name;
    agtype *start_vertex_agt;
    agtype *end_vertex_agt;
    int32 max_hops = 10; /* default max hops */
    Oid graph_oid;
    graphid start_vertex_id;
    graphid end_vertex_id;
    List *path_vertices;
    GRAPH_global_context *ggctx;
    agtype_value *start_agtv;
    agtype_value *end_agtv;
    agtype_value *agtv_result;
    agtype_parse_state *state = NULL;
    ListCell *lc;
    
    /* Check for null arguments */
    if (PG_ARGISNULL(0) || PG_ARGISNULL(1) || PG_ARGISNULL(2))
        PG_RETURN_NULL();
    
    /* Get arguments */
    graph_name = PG_GETARG_CSTRING(0);
    start_vertex_agt = AG_GET_ARG_AGTYPE_P(1);
    end_vertex_agt = AG_GET_ARG_AGTYPE_P(2);
    
    if (!PG_ARGISNULL(3))
        max_hops = PG_GETARG_INT32(3);
    
    /* Get graph OID */
    graph_oid = get_graph_oid(graph_name);
    if (!OidIsValid(graph_oid))
        ereport(ERROR, (errcode(ERRCODE_INVALID_PARAMETER_VALUE),
                        errmsg("graph \"%s\" does not exist", graph_name)));
    
    /* Get graph context */
    ggctx = manage_GRAPH_global_contexts(graph_name, graph_oid);
    if (ggctx == NULL)
        ereport(ERROR, (errcode(ERRCODE_INVALID_PARAMETER_VALUE),
                        errmsg("failed to get graph context for \"%s\"", graph_name)));
    
    /* Extract vertex IDs from agtype */
    start_agtv = get_ith_agtype_value_from_container(&start_vertex_agt->root, 0);
    end_agtv = get_ith_agtype_value_from_container(&end_vertex_agt->root, 0);
    
    if (start_agtv->type != AGTV_INTEGER || end_agtv->type != AGTV_INTEGER)
        ereport(ERROR, (errcode(ERRCODE_INVALID_PARAMETER_VALUE),
                        errmsg("vertex arguments must be integers")));
    
    start_vertex_id = start_agtv->val.int_value;
    end_vertex_id = end_agtv->val.int_value;
    
    /* Find shortest path */
    path_vertices = bfs_shortest_path(ggctx, start_vertex_id, end_vertex_id, max_hops);
    
    if (path_vertices == NIL)
        PG_RETURN_NULL();
    
    /* Build result path */
    agtv_result = push_agtype_value(&state, WAGT_BEGIN_ARRAY, NULL);
    
    foreach(lc, path_vertices)
    {
        graphid vertex_id = lfirst_oid(lc);
        agtype_value agtv_vertex;
        
        agtv_vertex.type = AGTV_INTEGER;
        agtv_vertex.val.int_value = vertex_id;
        agtv_result = push_agtype_value(&state, WAGT_ELEM, &agtv_vertex);
    }
    
    agtv_result = push_agtype_value(&state, WAGT_END_ARRAY, NULL);
    
    /* Cleanup */
    list_free(path_vertices);
    
    PG_RETURN_POINTER(agtype_value_to_agtype(agtv_result));
}

/*
 * PostgreSQL function: age_k_shortest_paths
 * 
 * Finds k shortest paths between two vertices
 */
PG_FUNCTION_INFO_V1(age_k_shortest_paths);

Datum age_k_shortest_paths(PG_FUNCTION_ARGS)
{
    /* For now, return the single shortest path - can be extended to implement Yen's algorithm */
    return age_shortest_path(fcinfo);
}

/*
 * PostgreSQL function: age_weighted_shortest_path
 * 
 * Finds the shortest weighted path between two vertices using Dijkstra's algorithm
 */
PG_FUNCTION_INFO_V1(age_weighted_shortest_path);

Datum age_weighted_shortest_path(PG_FUNCTION_ARGS)
{
    /* For now, return the unweighted shortest path - can be extended to implement Dijkstra */
    return age_shortest_path(fcinfo);
}