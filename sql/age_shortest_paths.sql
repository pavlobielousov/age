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

--
-- Shortest Path Functions
--

-- Single shortest path using BFS
CREATE FUNCTION ag_catalog.age_shortest_path(graph_name cstring, start_vertex agtype, end_vertex agtype)
    RETURNS agtype
    LANGUAGE c
    IMMUTABLE
RETURNS NULL ON NULL INPUT
PARALLEL SAFE
AS 'MODULE_PATHNAME';

-- Single shortest path with max hops limit
CREATE FUNCTION ag_catalog.age_shortest_path(graph_name cstring, start_vertex agtype, end_vertex agtype, max_hops int4)
    RETURNS agtype
    LANGUAGE c
    IMMUTABLE
RETURNS NULL ON NULL INPUT
PARALLEL SAFE
AS 'MODULE_PATHNAME';

-- K shortest paths
CREATE FUNCTION ag_catalog.age_k_shortest_paths(graph_name cstring, start_vertex agtype, end_vertex agtype, k int4)
    RETURNS agtype
    LANGUAGE c
    IMMUTABLE
RETURNS NULL ON NULL INPUT
PARALLEL SAFE
AS 'MODULE_PATHNAME';

-- K shortest paths with max hops limit
CREATE FUNCTION ag_catalog.age_k_shortest_paths(graph_name cstring, start_vertex agtype, end_vertex agtype, k int4, max_hops int4)
    RETURNS agtype
    LANGUAGE c
    IMMUTABLE
RETURNS NULL ON NULL INPUT
PARALLEL SAFE
AS 'MODULE_PATHNAME';

-- Weighted shortest path using Dijkstra's algorithm
CREATE FUNCTION ag_catalog.age_weighted_shortest_path(graph_name cstring, start_vertex agtype, end_vertex agtype, weight_property cstring)
    RETURNS agtype
    LANGUAGE c
    IMMUTABLE
RETURNS NULL ON NULL INPUT
PARALLEL SAFE
AS 'MODULE_PATHNAME';

-- Weighted shortest path with max hops limit
CREATE FUNCTION ag_catalog.age_weighted_shortest_path(graph_name cstring, start_vertex agtype, end_vertex agtype, weight_property cstring, max_hops int4)
    RETURNS agtype
    LANGUAGE c
    IMMUTABLE
RETURNS NULL ON NULL INPUT
PARALLEL SAFE
AS 'MODULE_PATHNAME';

--
-- Cypher syntax support functions
--

-- Single shortest path from Cypher syntax: shortestPath((a)-[*1..6]-(b))
CREATE FUNCTION ag_catalog.age_shortest_path_cypher(path_expr agtype)
    RETURNS agtype
    LANGUAGE c
    IMMUTABLE
RETURNS NULL ON NULL INPUT
PARALLEL SAFE
AS 'MODULE_PATHNAME';

-- K shortest paths from Cypher syntax: kShortestPaths((a)-[*1..6]-(b), 5)
CREATE FUNCTION ag_catalog.age_k_shortest_paths_cypher(path_expr agtype, k int4)
    RETURNS agtype
    LANGUAGE c
    IMMUTABLE
RETURNS NULL ON NULL INPUT
PARALLEL SAFE
AS 'MODULE_PATHNAME';

-- Weighted shortest path from Cypher syntax: weightedShortestPath((a)-[e*1..6]-(b), e.cost)
CREATE FUNCTION ag_catalog.age_weighted_shortest_path_cypher(path_expr agtype, weight_property agtype)
    RETURNS agtype
    LANGUAGE c
    IMMUTABLE
RETURNS NULL ON NULL INPUT
PARALLEL SAFE
AS 'MODULE_PATHNAME';