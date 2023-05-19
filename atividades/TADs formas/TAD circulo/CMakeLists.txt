cmake_minimum_required(VERSION 3.25)
project(TAD_circulo C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(TAD_circulo
        circulo.c
        circulo.h
        main.c
        ponto.c
        ponto.h)
