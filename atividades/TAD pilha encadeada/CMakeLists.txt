cmake_minimum_required(VERSION 3.25)
project(TAD_pilha_encadeada C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(TAD_pilha_encadeada
        main.c
        pilha.c
        pilha.h)
