cmake_minimum_required(VERSION 3.8)
project(rmq_lca)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES c.cpp)
add_executable(rmq_lca ${SOURCE_FILES})