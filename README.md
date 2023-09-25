# CMake Example with Static Library and Google Test

Build and run the app:

```bash
cmake -B build        # Created the build directory
cmake --build build   # Build the project
build/mainapp         # Run the app
```

Run the tests:

```bash
ctest --test-dir  build/src/NumericIntegration/PRIVATE # Run the PRIVATE tests for the NumericalIntegration library
```
