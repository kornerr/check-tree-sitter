cmake_minimum_required(VERSION 3.16)
include(FetchContent)
project(hw)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Dependency: Tree sitter
FetchContent_Declare(
    ts
    GIT_REPOSITORY https://github.com/tree-sitter/tree-sitter.git
    GIT_TAG v0.24.7
    GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(ts)
add_library(
    ts
    STATIC
    ${ts_SOURCE_DIR}/lib/src/lib.c
)
target_include_directories(
    ts
    PUBLIC
    ${ts_SOURCE_DIR}/lib/include
)

# Kotlin grammar for Tree sitter
FetchContent_Declare(
    ts-kotlin
    GIT_REPOSITORY https://github.com/fwcd/tree-sitter-kotlin.git
    GIT_TAG main
    GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(ts-kotlin)
add_library(
    ts_kotlin
    STATIC
    ${ts-kotlin_SOURCE_DIR}/src/parser.c
    ${ts-kotlin_SOURCE_DIR}/src/scanner.c
)
target_include_directories(
    ts_kotlin
    PUBLIC
    ${ts-kotlin_SOURCE_DIR}/src
    ${ts-kotlin_SOURCE_DIR}/bindings/c
)
target_link_libraries(
    ts_kotlin
    PUBLIC
    ts
)

add_executable(
    hw
    src/main.cpp
)
target_link_libraries(
    hw
    PRIVATE
    ts_kotlin
)
