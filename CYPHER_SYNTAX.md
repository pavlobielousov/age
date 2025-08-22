# Cypher Syntax Support for Shortest Path Functions

This document shows the newly implemented Cypher syntax support for shortest path functions in Apache AGE.

## New Syntax Available

### 1. Single Shortest Path
```sql
-- New Cypher syntax (within MATCH clause)
SELECT * FROM cypher('graph_name', $$
  MATCH p = shortestPath((a:Table {name:'Contact'})-[*1..6]-(b:Table {name:'Account'}))
  WHERE a <> b
  RETURN p
$$) AS (path agtype);
```

### 2. K Shortest Paths  
```sql
-- Find up to 5 shortest paths
SELECT * FROM cypher('graph_name', $$
  MATCH p = kShortestPaths((a:Table {name:'Contact'})-[*1..6]-(b:Table {name:'Account'}), 5)
  WHERE a <> b
  RETURN p
$$) AS (paths agtype);
```

### 3. Weighted Shortest Path
```sql
-- Find shortest path considering edge weights
SELECT * FROM cypher('graph_name', $$
  MATCH p = weightedShortestPath((a)-[e*1..6]-(b), e.cost)
  WHERE a.name = 'start' AND b.name = 'end'
  RETURN p
$$) AS (path agtype);
```

## Existing PostgreSQL Function Syntax (Still Available)

### Direct Function Calls
```sql
-- Single shortest path
SELECT age_shortest_path('graph_name', start_vertex, end_vertex);
SELECT age_shortest_path('graph_name', start_vertex, end_vertex, max_hops);

-- K shortest paths
SELECT age_k_shortest_paths('graph_name', start_vertex, end_vertex, k);
SELECT age_k_shortest_paths('graph_name', start_vertex, end_vertex, k, max_hops);

-- Weighted shortest paths
SELECT age_weighted_shortest_path('graph_name', start_vertex, end_vertex, 'weight_property');
SELECT age_weighted_shortest_path('graph_name', start_vertex, end_vertex, 'weight_property', max_hops);
```

## Implementation Details

### Parser Changes
1. **Keywords Added**: `shortestpath`, `kshortestpaths`, `weightedshortestpath`
2. **Grammar Extensions**: New rules in `expr_func_subexpr` to handle Cypher syntax
3. **Function Mapping**: Cypher syntax maps to internal wrapper functions

### Function Architecture
```
Cypher Syntax              Parser              Wrapper Function           Core Algorithm
================================================================================
shortestPath(...)     ->   Grammar Rule   ->   age_shortest_path_cypher    ->  BFS Algorithm
kShortestPaths(...)   ->   Grammar Rule   ->   age_k_shortest_paths_cypher ->  Extended BFS
weightedShortestPath(...) -> Grammar Rule  ->   age_weighted_..._cypher     ->  Dijkstra (planned)
```

### Benefits of Dual Syntax Support
1. **Neo4j Compatibility**: Cypher syntax matches Neo4j and other graph databases
2. **PostgreSQL Integration**: Direct function calls for stored procedures and complex queries
3. **Migration Path**: Existing code using functions continues to work
4. **Query Optimization**: Both syntaxes can be optimized by the query planner

## Example Usage

```sql
LOAD 'age';
SET search_path TO ag_catalog;

-- Create test graph
SELECT create_graph('demo');
SELECT * FROM cypher('demo', $$
    CREATE (a:City {name: 'New York'})
    CREATE (b:City {name: 'Boston'})  
    CREATE (c:City {name: 'Philadelphia'})
    CREATE (a)-[:ROAD {distance: 200}]->(b)
    CREATE (a)-[:ROAD {distance: 100}]->(c)
    CREATE (c)-[:ROAD {distance: 300}]->(b)
$$) AS (result agtype);

-- Use new Cypher syntax
SELECT * FROM cypher('demo', $$
    MATCH p = shortestPath((a:City)-[*1..3]-(b:City))
    WHERE a.name = 'New York' AND b.name = 'Boston'
    RETURN p
$$) AS (shortest_path agtype);

-- Use existing function syntax  
SELECT age_shortest_path('demo', 
    (SELECT id FROM ag_vertex WHERE properties->>'name' = 'New York'),
    (SELECT id FROM ag_vertex WHERE properties->>'name' = 'Boston')
);
```

## Current Status

✅ **Completed**:
- Parser grammar extensions for all three Cypher syntax variants
- Keyword recognition and tokenization
- Function mapping infrastructure 
- Basic wrapper function stubs
- PostgreSQL function definitions

🚧 **In Progress**:
- Full path expression parsing in wrapper functions
- Integration with existing BFS algorithm
- Comprehensive test coverage

🔮 **Planned**:
- Complete Dijkstra algorithm implementation for weighted paths
- Yen's algorithm for true k-shortest paths
- Performance optimizations
- Advanced path constraint support

## Files Modified

- `src/include/parser/cypher_kwlist.h` - Added new keywords
- `src/backend/parser/cypher_gram.y` - Added grammar rules  
- `sql/age_shortest_paths.sql` - Added Cypher wrapper functions
- `src/include/utils/age_shortest_path.h` - Added function declarations
- `src/backend/utils/adt/age_shortest_path.c` - Added wrapper implementations