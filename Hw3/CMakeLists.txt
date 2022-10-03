cmake_minimum_required(VERSION 3.21)
project(Hw3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Hw3
        main.cpp
        Console/circles_and_squqares.cpp
        Console/console_graphic_application.cpp
        Console/console_graphics.cpp
        Console/console_graphics.hpp
        test1.cpp
        test_main.cpp
        test.h
        prog/vc3D.h
        test2.cpp)
