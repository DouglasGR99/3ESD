cmake_minimum_required(VERSION 3.25)
project(TAD_ponto C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(TAD_ponto
        main.c
        ponto.c
        ponto.h)
