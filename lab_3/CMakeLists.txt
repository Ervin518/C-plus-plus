cmake_minimum_required(VERSION 3.26)
project(Zadanie3)

set(CMAKE_CXX_STANDARD 17)

add_executable(Zadanie3
        main.cpp
        point.cpp point.h
        line.cpp line.h
        shape.cpp shape.h
        rectangle.cpp rectangle.h
        square.cpp square.h
        triangle.cpp triangle.h
        isosceles_triangle.cpp isosceles_triangle.h
        equilateral_triangle.cpp equilateral_triangle.h
)