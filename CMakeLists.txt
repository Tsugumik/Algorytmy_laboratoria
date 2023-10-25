cmake_minimum_required(VERSION 3.26)
project(Algorytmy_laboratoria)

set(CMAKE_CXX_STANDARD 17)

add_executable(ALG_18_10_2023 main.cpp
        zadania.h
        zadania_18_10_2023/zad_1.cpp
        zadania_18_10_2023/zad_2.cpp
        algorithms/Algorithms.h
        zadania_18_10_2023/zad_3.cpp
        zadania_18_10_2023/zad_4.cpp
        zadania_18_10_2023/zad_5.cpp
        zadania_18_10_2023/zad_6.cpp
        zadania_18_10_2023/zad_7.cpp
        algorithms/Array_tools.cpp
        algorithms/Math_functions.h
        algorithms/Math_functions.cpp
        algorithms/Algorithms.cpp
        zadania_25_10_2023/zad_1.cpp
        zadania_25_10_2023/zad_2.cpp
        zadania_25_10_2023/zad_3.cpp
        zadania_25_10_2023/zad_4.cpp
        zadania_25_10_2023/zad_5.cpp
        zadania_25_10_2023/zad_6.cpp
        zadania_25_10_2023/zad_7.cpp
        algorithms/Matrix_tools.cpp
        algorithms/Matrix_tools.h)
