See if Kotlin Dialect can be transpiled into C++ and may be other languages

# Build

`./util/build-desktop`

<details>
<summary>Console output (macOS Tahoe)</summary>

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

<details>
<summary>Console output (macOS Tahoe)</summary>

```
(source_file (line_comment) (package_header (identifier (simple_identifier) (simple_identifier))) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (function_declaration (simple_identifier) (function_value_parameters (parameter (simple_identifier) (user_type (type_identifier)))) (user_type (type_identifier)) (function_body (statements (if_expression (multiline_comment) condition: (disjunction_expression (equality_expression (navigation_expression (simple_identifier) (navigation_suffix (simple_identifier))) (navigation_expression (simple_identifier) (navigation_suffix (simple_identifier)))) (multiline_comment) (equality_expression (navigation_expression (simple_identifier) (navigation_suffix (simple_identifier))) (navigation_expression (simple_identifier) (navigation_suffix (simple_identifier))))) consequence: (control_structure_body (statements (assignment (directly_assignable_expression (simple_identifier) (navigation_suffix (simple_identifier))) (boolean_literal)) (assignment (directly_assignable_expression (simple_identifier) (navigation_suffix (simple_identifier))) (navigation_expression (simple_identifier) (navigation_suffix (simple_identifier)))) (jump_expression (simple_identifier))))) (assignment (directly_assignable_expression (simple_identifier) (navigation_suffix (simple_identifier))) (navigation_expression (simple_identifier) (navigation_suffix (simple_identifier)))) (jump_expression (simple_identifier))))) (line_comment) (line_comment) (line_comment) (line_comment) (function_declaration (simple_identifier) (function_value_parameters (parameter (simple_identifier) (user_type (type_identifier)))) (user_type (type_identifier)) (function_body (multiline_comment) (statements (if_expression condition: (equality_expression (navigation_expression (simple_identifier) (navigation_suffix (simple_identifier))) (navigation_expression (simple_identifier) (navigation_suffix (simple_identifier)))) consequence: (control_structure_body (statements (assignment (directly_assignable_expression (simple_identifier) (navigation_suffix (simple_identifier))) (call_expression (simple_identifier) (call_suffix (value_arguments (value_argument (navigation_expression (simple_identifier) (navigation_suffix (simple_identifier)))))))) (assignment (directly_assignable_expression (simple_identifier) (navigation_suffix (simple_identifier))) (navigation_expression (simple_identifier) (navigation_suffix (simple_identifier)))) (jump_expression (simple_identifier))))) (assignment (directly_assignable_expression (simple_identifier) (navigation_suffix (simple_identifier))) (navigation_expression (simple_identifier) (navigation_suffix (simple_identifier)))) (jump_expression (simple_identifier))))))
```

</summary>
