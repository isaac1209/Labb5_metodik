cmake_minimum_required(VERSION 3.23)
project(Labb5_metodik)

set(CMAKE_CXX_STANDARD 17)
set(Headers Book.h MyPrint.h find_if_greater.h)
add_executable(Labb5_metodik main.cpp Book.cpp MyPrint.cpp find_if_greater.cpp)
