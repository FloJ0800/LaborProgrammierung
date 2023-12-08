cmake_minimum_required(VERSION 3.26)
project(Übung_7 C)

set(CMAKE_C_STANDARD 11)

add_executable(Übung_7 main.c
        listFunctions.c
        palilib/library.h
        palilib/palindrom.c)
