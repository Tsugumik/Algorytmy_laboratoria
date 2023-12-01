#include "../zadania.h"
#include "../algorithms/Array_tools.h"
#include "../algorithms/Sorting.h"

void zadania_29_11_2023::zad_1() {
    int tab[8]{
            7, 6, 1, 2, 5, 4, 8, 9
    };

    std::cout << "(Sortowanie przez scalenie) Przed sortowaniem:\n";
    Array_tools::Print_arr<int>(tab, 8);

    Sorting::Merge_sort(tab, 8);

    std::cout << "(Sortowanie przez scalenie) Po sortowaniu:\n";
    Array_tools::Print_arr<int>(tab, 8);
}
