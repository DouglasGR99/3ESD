cmake_minimum_required(VERSION 2.8.12)
project(atividade_Lista)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(atividade_Lista
        main.c
        lista.c
        lista.h
        )