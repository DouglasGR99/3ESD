cmake_minimum_required(VERSION 3.25)
project(TAD_lista_DV_cabeca C)

set(CMAKE_C_STANDARD 11)

add_executable(TAD_lista_DV_cabeca main.c
        duplaVerCabeca.c
        duplaVerCabeca.h)