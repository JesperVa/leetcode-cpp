cmake_minimum_required(VERSION 3.26)
project(cpp)

set(CMAKE_CXX_STANDARD 23)

add_executable(cpp main.cpp
        solutions/pascals_triangle/pascals_triangle.h
        solutions/single_number/single_number.h)
