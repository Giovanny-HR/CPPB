cmake_minimum_required(VERSION 3.21)
project(Hw3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Hw3
        main.cpp
        circles_and_squqares.cpp
        console_graphic_application.cpp
        console_graphics.cpp
        console_graphics.hpp
        test1.cpp
        test_main.cpp
        test.h
        vec3d.h
        test2.cpp)
