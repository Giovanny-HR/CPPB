cmake_minimum_required(VERSION 3.21)
project(Hw4)

set(CMAKE_CXX_STANDARD 14)

include_directories(prog_01_console_graphics_inheritance)
include_directories(prog_02_console_graphics_polymorphism)

add_executable(Hw4
        prog_01_console_graphics_inheritance/console_graphics_inheritance.cpp
        prog_01_console_graphics_inheritance/console_graphics_inheritance.hpp
        prog_01_console_graphics_inheritance/console_graphics_inheritance_application.cpp
        prog_02_console_graphics_polymorphism/console_graphics_polymorphism.cpp
        prog_02_console_graphics_polymorphism/console_graphics_polymorphism.hpp
        prog_02_console_graphics_polymorphism/console_graphics_polymorphism_application.cpp
        prog_02_console_graphics_polymorphism/console_graphics_polymorphism_no_debug.cpp
        main.cpp)
