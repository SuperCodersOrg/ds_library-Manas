cmake_minimum_required(VERSION 3.16)

project(STL_Collections LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(
    ${PROJECT_SOURCE_DIR}/include
)

add_executable(
    test_dynamic_array
    test/test_dynamic_array.cpp
)

add_executable(
    test_linked_list
    test/test_linked_list.cpp
)

add_executable(
    test_hashmap
    test/test_hashmap.cpp
)