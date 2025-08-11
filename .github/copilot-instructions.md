# Apache AGE - Graph Database Extension for PostgreSQL

Apache AGE is a PostgreSQL extension that provides graph database functionality using openCypher queries. It includes language drivers for Go, Node.js, Python, and Java/JDBC.

Always reference these instructions first and fallback to search or bash commands only when you encounter unexpected information that does not match the info here.

## Working Effectively

### Bootstrap and Build
- Install build dependencies:
  ```bash
  sudo apt-get update
  sudo apt-get install -y build-essential libreadline-dev zlib1g-dev flex bison postgresql-server-dev-16
  ```
- Build and install AGE extension:
  ```bash
  make install
  ```
  - Build takes approximately 16 seconds. NEVER CANCEL. Set timeout to 10+ minutes.
  - LLVM compilation may fail but this is optional and does not affect core functionality.
  - The shared library `age.so` will be created and installed to PostgreSQL.

### Testing
- Run regression tests:
  ```bash
  make installcheck
  ```
  - Tests take approximately 29 seconds. NEVER CANCEL. Set timeout to 5+ minutes.
  - All 29 tests should pass successfully.
  - Tests require PostgreSQL service to be running.

### PostgreSQL Setup
- Ensure PostgreSQL 16 is running:
  ```bash
  sudo systemctl start postgresql@16-main
  ```
- Load AGE extension in PostgreSQL:
  ```sql
  CREATE EXTENSION age;
  LOAD 'age';
  SET search_path = ag_catalog, "$user", public;
  ```

### Language Drivers
Each driver has specific setup requirements:

#### Node.js Driver (`drivers/nodejs/`)
- Install dependencies:
  ```bash
  cd drivers/nodejs && npm install
  ```
  - Installation takes approximately 9 seconds. NEVER CANCEL. Set timeout to 5+ minutes.
- Build TypeScript:
  ```bash
  npm run build
  ```
- Run tests:
  ```bash
  npm test
  ```
  - Requires PostgreSQL authentication setup for full tests.

#### Go Driver (`drivers/golang/`)
- Install dependencies:
  ```bash
  cd drivers/golang && go mod tidy
  ```
- Run tests:
  ```bash
  go test -v ./...
  ```
  - Requires PostgreSQL authentication setup for full tests.

#### Python Driver (`drivers/python/`)
- Install driver:
  ```bash
  cd drivers/python && python3 -m pip install . --user
  ```
  - Requires psycopg package to be installed first.

## Validation

### Manual Testing Scenarios
Always run these validation scenarios after making changes:

1. **Basic Extension Loading**:
   ```bash
   sudo -u postgres psql -c "CREATE EXTENSION IF NOT EXISTS age;"
   sudo -u postgres psql -c "LOAD 'age';"
   ```

2. **Graph Creation and Query**:
   ```bash
   sudo -u postgres psql -c "LOAD 'age'; SET search_path = ag_catalog, \"\$user\", public; SELECT create_graph('test_graph');"
   sudo -u postgres psql -c "LOAD 'age'; SET search_path = ag_catalog, \"\$user\", public; SELECT * FROM cypher('test_graph', \$\$ CREATE (:Person {name: 'Test'}) \$\$) as (v agtype);"
   sudo -u postgres psql -c "LOAD 'age'; SET search_path = ag_catalog, \"\$user\", public; SELECT * FROM cypher('test_graph', \$\$ MATCH (n:Person) RETURN n \$\$) as (n agtype);"
   ```

3. **Regression Test Suite**:
   - Always run `make installcheck` to ensure no functionality is broken.
   - Verify all 29 tests pass without failures.

4. **Driver Functionality**:
   - Test Agtype parsing in each driver (works without database connection).
   - Validate connection tests pass with proper authentication setup.

### Build Verification
- Always run `make clean && make install` to ensure clean builds.
- Check that `age.so` shared library is created in the repository root.
- Verify extension files are properly installed to PostgreSQL directories.

## Common Tasks

### Repository Structure
```
.
├── README.md              # Comprehensive documentation
├── CONTRIBUTING.md        # Contribution guidelines  
├── Makefile              # Main build configuration
├── age.control           # PostgreSQL extension control file
├── src/                  # C source code for extension
│   ├── backend/          # Core AGE functionality
│   └── include/          # Header files
├── sql/                  # SQL scripts for extension
├── regress/              # Regression test suite
├── drivers/              # Language-specific drivers
│   ├── golang/           # Go driver
│   ├── nodejs/           # Node.js/TypeScript driver
│   ├── python/           # Python driver
│   └── jdbc/             # Java JDBC driver
└── tools/                # Build utilities
```

### Key Build Targets
- `make all` - Build extension (without installation)
- `make install` - Build and install extension
- `make installcheck` - Run regression tests
- `make clean` - Clean build artifacts

### PostgreSQL Version Support
AGE supports PostgreSQL versions 11, 12, 13, 14, 15, 16, and 17. Use `pg_config --version` to verify your PostgreSQL version.

### Development Workflow
1. Make code changes
2. Run `make clean && make install` to rebuild
3. Run `make installcheck` to verify functionality
4. Test specific scenarios related to your changes
5. Always validate that existing functionality still works

## Critical Warnings

- **NEVER CANCEL builds or tests** - Build may take up to 10 minutes, tests take up to 5 minutes
- **ALWAYS run regression tests** after any changes to C code
- **ALWAYS verify PostgreSQL is running** before running tests
- **Database authentication setup required** for full driver testing
- **LLVM compilation failures can be ignored** - they do not affect core functionality
- **When LLVM clang-19 is missing** - this only affects optional bytecode compilation, core extension still works

## Troubleshooting

### Common Build Issues
- **"postgres.h: No such file or directory"**: Install `postgresql-server-dev-16`
- **"clang-19: No such file or directory"**: Ignore this error, LLVM is optional
- **Extension functions not found**: Ensure you run `LOAD 'age'; SET search_path = ag_catalog, "$user", public;`

### Performance Expectations
- Clean build: ~16 seconds
- Incremental build: ~5-10 seconds  
- Regression tests: ~29 seconds
- Node.js driver install: ~9 seconds
- Go mod tidy: ~3-5 seconds

## Environment Requirements

- Ubuntu/Debian Linux environment (tested on Ubuntu 24.04)
- PostgreSQL 11-17 with development packages (tested with 16.9)
- Standard build tools (gcc, make, flex, bison)
- Node.js for JavaScript driver development
- Go 1.19+ for Go driver development  
- Python 3.9+ for Python driver development

This extension provides enterprise-grade graph database capabilities on top of PostgreSQL, enabling hybrid relational and graph workloads using standard SQL and openCypher queries.