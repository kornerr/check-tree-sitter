See if Kotlin Dialect can be transpiled into C++ and may be other languages

# Build

`./util/build-desktop`

<details>
<summary>Console output</summary>

```
> > > > Step №1. Build for Desktop
-- The C compiler identification is AppleClang 17.0.0.17000319
-- The CXX compiler identification is AppleClang 17.0.0.17000319
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done (69.8s)
-- Generating done (0.0s)
-- Build files have been written to: /Volumes/MOE/p/check-tree-sitter/ver-desktop/build
[ 14%] Building C object CMakeFiles/ts.dir/_deps/ts-src/lib/src/lib.c.o
[ 28%] Linking C static library libts.a
[ 28%] Built target ts
[ 42%] Building C object CMakeFiles/ts_kotlin.dir/_deps/ts-kotlin-src/src/parser.c.o
[ 57%] Building C object CMakeFiles/ts_kotlin.dir/_deps/ts-kotlin-src/src/scanner.c.o
[ 71%] Linking C static library libts_kotlin.a
[ 71%] Built target ts_kotlin
[ 85%] Building CXX object CMakeFiles/hw.dir/src/main.cpp.o
[100%] Linking CXX executable hw
[100%] Built target hw
```

</details>

# Run

`./util/launch-desktop sample.kt`
