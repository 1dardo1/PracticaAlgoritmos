cmake_minimum_required(VERSION 3.29)
project(practicaExtraordinaria C)

set(CMAKE_C_STANDARD 11)

add_executable(practicaExtraordinaria main.c
        listas.h
        arbolesBinarios.h
        colaPrincipioFin.h
        colaCircular.h
        pilas.h)
