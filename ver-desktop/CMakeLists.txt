cmake_minimum_required(VERSION 3.16)
project(hw)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Application
set(
    SOURCES
    src/main.cpp
)

add_executable(hw ${SOURCES})
