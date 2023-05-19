cmake_minimum_required(VERSION 3.20)

project(pingpong VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_compile_options(-Wall -Wpedantic -Werror)

enable_testing()
include_directories(${CMAKE_SOURCE_DIR}/include)
add_subdirectory(libsrc/pingpong)
add_subdirectory(projects/pingpong_wrapper)