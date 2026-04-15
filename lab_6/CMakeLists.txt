cmake_minimum_required(VERSION 3.26)
project(zad_6)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(zad_6
        dane_do_zadania.txt
        dijkstra.cpp
        graf.cpp
        graf.h
        krawedz.cpp
        krawedz.h
        wierzcholek.h
        wierzcholek.cpp
        main.cpp)
