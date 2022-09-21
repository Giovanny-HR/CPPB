cmake_minimum_required(VERSION 3.21)
project(Hw3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Hw3
        main.cpp
        prog_01_circles_and_squqares.cpp
        prog_02_console_graphic_application.cpp
        prog_02_console_graphics.cpp
        prog_02_consolegraphics.hpp)
