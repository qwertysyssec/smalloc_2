cmake_minimum_required(VERSION 2.8)

project(smalloc_2)
add_executable(${PROJECT_NAME} "main.cpp" "smalloc.cpp" "smalloc.hpp" "chunk.cpp" "chunk.hpp" "debug.hpp" "details.hpp")
