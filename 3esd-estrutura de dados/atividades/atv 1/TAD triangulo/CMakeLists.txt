cmake_minimum_required(VERSION 3.25)
project(TAD_triangulo C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(TAD_triangulo
        main.c
        ponto.c
        ponto.h
        triangulo.c
        triangulo.h)
