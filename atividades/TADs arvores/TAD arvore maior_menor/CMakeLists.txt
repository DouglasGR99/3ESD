cmake_minimum_required(VERSION 3.25)
project(TAD_arvore_maior_menor C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(TAD_arvore_maior_menor
        arvoreBinaria.c
        arvoreBinaria.h main.c)
