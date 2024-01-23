cmake_minimum_required(VERSION 3.0)
project(Algorytmy_laboratoria)

set(CMAKE_CXX_STANDARD 17)

find_package(GTest QUIET)
if (GTEST_FOUND)
    message(STATUS "GTest found, compiling tests.")
    enable_testing()
    include_directories(${GTEST_INCLUDE_DIRS})

    add_executable(Tests
            algorithms/Sorting.cpp
            algorithms/Array_tools.cpp
            algorithms/Math_functions.cpp
            zadania_22_11_2023/zad_1_test.cpp
            zadania_22_11_2023/zad_2_test.cpp
            gtest_main.cpp
            zadania_29_11_2023/zad_1_test.cpp
    )

    target_link_libraries(Tests GTest::GTest GTest::Main)
    add_test(NAME Tests COMMAND Tests)
else ()
    message(WARNING "GTest not found, tests will not be compiled.")
endif ()

add_executable(Algorytmy_laboratoria main.cpp
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
        algorithms/Matrix_tools.h
        zadania_8_11_2023/zad_1.cpp
        zadania_8_11_2023/zad_2.cpp
        zadania_8_11_2023/zad_3.cpp
        zadania_8_11_2023/zad_4.cpp
        zadania_8_11_2023/zad_5.cpp
        zadania_8_11_2023/zad_6.cpp
        algorithms/Sorting.cpp
        algorithms/Sorting.h
        zadania_15_11_2023/zad_1.cpp
        zadania_15_11_2023/zad_2.cpp
        zadania_22_11_2023/zad_1.cpp
        zadania_22_11_2023/zad_2.cpp
        zadania_29_11_2023/zad_1.cpp
        time_measure/Gen_time_test_data.cpp
        time_measure/Gen_time_test_data.h
        time_measure/Sorting_time_measure.cpp
        time_measure/Sorting_time_measure.h
        zadania_11_12_2023/zad_2.cpp
        zadania_11_12_2023/zad_2.cpp
        time_measure/Measure_specific.cpp
        time_measure/Measure_specific.h
        time_measure/Save_results_to_file.cpp
        time_measure/Save_results_to_file.h
        zadania_11_12_2023/zad_1.cpp
        stack/Stack.h
        linked_list/LinkedList.h
        linked_list/LinkedListNode.h
        zadania_13_12_2023/zad_2.cpp
        queue/Queue.h
        queue/PriorityQueue.h
        queue/PriorityQueueNode.h
        zadania_10_01_2024/zad_1.cpp
        zadania_10_01_2024/zad_2.cpp
        zadania_12_01_2024/zad_1.cpp
        zadania_12_01_2024/IDataStructure.h
        zadania_12_01_2024/DataStructureManagers.h
        zadania_12_01_2024/zad_2.cpp
        zadania_12_01_2024/HanoiTower.h
        zadania_12_01_2024/HanoiTower.cpp
        ciphers/Ciphers.cpp
        ciphers/Ciphers.h
        deciphers/Deciphers.cpp
        deciphers/Deciphers.h
)
