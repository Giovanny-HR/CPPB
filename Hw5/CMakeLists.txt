cmake_minimum_required(VERSION 3.21)
project(Hw5)

set(CMAKE_CXX_STANDARD 23)

include_directories(matrix)

add_executable(Hw5
        matrix/matrix.cpp
        matrix/matrix.hpp
        matrix/matrix_application.cpp
        named.cpp
        between.cpp
        main.cpp)
