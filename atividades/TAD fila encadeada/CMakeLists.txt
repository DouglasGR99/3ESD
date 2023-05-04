cmake_minimum_required(VERSION 3.25)
project(TAD_fila_encadeada C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(TAD_fila_encadeada
        fila.c
        fila.h
        main.c)
