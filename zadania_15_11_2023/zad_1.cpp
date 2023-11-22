#include "../zadania.h"
#include "../algorithms/Array_tools.h"
#include "../algorithms/Sorting.h"

void zadania_15_11_2023::zad_1() {
    int arr[10] {
        10,9,8,7,6,5,4,3,2,1
    };

    std::cout << "Przed sortowaniem:\n";
    Array_tools::Print_arr<int>(arr, 10);

    Sorting::Bubble_sort(arr, 10);

    std::cout << "Po sortowaniu:\n";
    Array_tools::Print_arr<int>(arr, 10);
}