cmake_minimum_required(VERSION 3.20) # (цифры версии могут быть твои, не меняй их)
project(lab_7)

set(CMAKE_CXX_STANDARD 14) # (или 17)

# САМАЯ ВАЖНАЯ СТРОЧКА:
add_executable(lab_7 main.cpp ilosc_moich_dyplomow.cpp)