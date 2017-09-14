cmake_minimum_required(VERSION 3.7)
project(Tarea6_Zebra)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Evaluador.cpp Evaluador.h Pais.cpp Pais.h NodoNario.cpp NodoNario.h)
add_executable(Tarea6_Zebra ${SOURCE_FILES})