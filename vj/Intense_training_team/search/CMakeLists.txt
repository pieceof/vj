cmake_minimum_required(VERSION 3.8)
project(search)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp a.cpp b.cpp)
add_executable(search ${SOURCE_FILES})