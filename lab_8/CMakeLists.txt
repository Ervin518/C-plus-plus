cmake_minimum_required(VERSION 3.26)
project(lab_8)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab_8
        aplikacja_sportowa.cpp
        aplikacja_sportowa.h
        main.cpp
        polaczenie.cpp
        powiadomienia_aplikacji.cpp
        powiadomienia_aplikacji.h)
