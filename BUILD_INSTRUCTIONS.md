# Building and Testing AGE with Shortest Path Cypher Syntax

## Overview

The AGE extension now supports native Cypher syntax for shortest path functions. However, to use the new syntax, you need to build and install the updated extension.

## Build Requirements

- PostgreSQL 16+ with development headers
- Build tools: make, gcc, bison, flex

## Build Steps

### Using Docker (Recommended)

```bash
# Build the Docker image with AGE
cd docker
docker build -t age-with-shortest-path .

# Run PostgreSQL with the new AGE extension
docker run -d \
  --name age-test \
  -e POSTGRES_PASSWORD=postgres \
  -p 5432:5432 \
  age-with-shortest-path

# Connect and test
docker exec -it age-test psql -U postgres
```

### Manual Build

```bash
# Install PostgreSQL development headers (Ubuntu/Debian)
sudo apt-get install postgresql-server-dev-16 build-essential bison flex

# Or for other versions:
sudo apt-get install postgresql-server-dev-all

# Build AGE
make clean
make -j4
sudo make install

# Restart PostgreSQL
sudo systemctl restart postgresql
```

## Testing the New Syntax

Once built and installed, you can test the new Cypher syntax:

```sql
-- Load the extension
CREATE EXTENSION IF NOT EXISTS age;
LOAD 'age';
SET search_path = ag_catalog, "$user", public;

-- Create test graph
SELECT create_graph('shortest_path_test');

-- Add test data
SELECT * FROM cypher('shortest_path_test', $$
    CREATE (a:Node {name: 'A'}),
           (b:Node {name: 'B'}),
           (c:Node {name: 'C'}),
           (d:Node {name: 'D'})
$$) AS (result agtype);

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

-- Test new Cypher syntax
SELECT * FROM cypher('shortest_path_test', $$
    MATCH p = shortestPath((a:Node)-[*1..3]-(b:Node))
    WHERE a.name = 'A' AND b.name = 'D'
    RETURN p
$$) AS (shortest_path agtype);
```

## Grammar Changes Made

The following changes were made to enable Cypher syntax:

1. **Keywords Added**: `shortestpath`, `kshortestpaths`, `weightedshortestpath` in `cypher_kwlist.h`
2. **Grammar Rules**: Extended `anonymous_path` rule in `cypher_gram.y` to accept:
   - `SHORTESTPATH '(' anonymous_path ')'`
   - `KSHORTESTPATHS '(' anonymous_path ',' expr ')'`
   - `WEIGHTEDSHORTESTPATH '(' anonymous_path ',' expr ')'`

## Troubleshooting

### "syntax error at or near 'shortestPath'"

This error indicates that:
1. The AGE extension wasn't rebuilt after the grammar changes
2. The extension wasn't reloaded in PostgreSQL
3. An older version of AGE is still loaded

**Solution**: 
1. Rebuild AGE completely: `make clean && make && sudo make install`
2. Restart PostgreSQL: `sudo systemctl restart postgresql`
3. Reload the extension: `DROP EXTENSION age CASCADE; CREATE EXTENSION age;`

### Build Errors

If you get compilation errors, ensure you have:
- Correct PostgreSQL development headers installed
- Proper build tools (bison, flex, gcc, make)
- Write permissions for PostgreSQL extension directory

## Available Syntax

Both syntaxes are supported:

**New Cypher Syntax**:
```sql
MATCH p = shortestPath((a:Node)-[*1..6]-(b:Node))
MATCH paths = kShortestPaths((a:Node)-[*1..6]-(b:Node), 5)
MATCH p = weightedShortestPath((a)-[e*1..6]-(b), e.cost)
```

**PostgreSQL Function Syntax** (still available):
```sql
SELECT age_shortest_path('graph', start_id, end_id);
SELECT age_k_shortest_paths('graph', start_id, end_id, 5);
SELECT age_weighted_shortest_path('graph', start_id, end_id, 'weight_prop');
```