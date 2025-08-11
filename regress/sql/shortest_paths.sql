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

LOAD 'age';
SET search_path TO ag_catalog;

SELECT create_graph('shortest_path_test');

-- Create test vertices
SELECT * FROM cypher('shortest_path_test', $$
    CREATE (a:Node {name: 'A'}),
           (b:Node {name: 'B'}),
           (c:Node {name: 'C'}),
           (d:Node {name: 'D'})
$$) AS (result agtype);

-- Create test edges: A -> B -> C -> D and A -> C (shortcut)
SELECT * FROM cypher('shortest_path_test', $$
    MATCH (a:Node {name: 'A'}), (b:Node {name: 'B'})
    CREATE (a)-[:EDGE]->(b)
$$) AS (result agtype);

SELECT * FROM cypher('shortest_path_test', $$
    MATCH (b:Node {name: 'B'}), (c:Node {name: 'C'})
    CREATE (b)-[:EDGE]->(c)
$$) AS (result agtype);

SELECT * FROM cypher('shortest_path_test', $$
    MATCH (c:Node {name: 'C'}), (d:Node {name: 'D'})
    CREATE (c)-[:EDGE]->(d)
$$) AS (result agtype);

SELECT * FROM cypher('shortest_path_test', $$
    MATCH (a:Node {name: 'A'}), (c:Node {name: 'C'})
    CREATE (a)-[:EDGE]->(c)
$$) AS (result agtype);

-- Get vertex IDs for testing
SELECT * FROM cypher('shortest_path_test', $$
    MATCH (n:Node) RETURN id(n) AS vertex_id, n.name AS name ORDER BY n.name
$$) AS (vertex_id agtype, name agtype);

-- Test shortest path function exists
\echo 'Testing if shortest path functions exist...'

-- Test with simple case: should return NULL for now (function returns NULL when vertices don't exist)
SELECT age_shortest_path('shortest_path_test', '1'::agtype, '2'::agtype);

-- Test with max hops parameter
SELECT age_shortest_path('shortest_path_test', '1'::agtype, '2'::agtype, 5);

-- Test k shortest paths function  
SELECT age_k_shortest_paths('shortest_path_test', '1'::agtype, '2'::agtype, 3);

-- Test weighted shortest path function
SELECT age_weighted_shortest_path('shortest_path_test', '1'::agtype, '2'::agtype, 'weight');

\echo 'Shortest path function tests completed.'

-- Clean up
SELECT drop_graph('shortest_path_test', true);