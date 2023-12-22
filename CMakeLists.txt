cmake_minimum_required(VERSION 3.26)
project(EstructuraDeDatos)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(TP1)

add_executable(EstructuraDeDatos
        TP1/P1.cpp
        TP1/P1.h
        TP1/main.cpp
        TP1/main.cpp)
