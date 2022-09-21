cmake_minimum_required(VERSION 3.21)
project(Hw6)

set(CMAKE_CXX_STANDARD 14)

include_directories(matrixpp)

add_executable(Hw6
        matrixpp/matrix_application.cpp
        matrixpp/matrixpp.cpp
        matrixpp/matrixpp.hpp
        main.cpp)
