#include "../algorithms/Array_tools.h"
#include "../algorithms/Sorting.h"
#include "../zadania.h"

void zadania_22_11_2023::zad_1() {
    int tab[8]{
            7, 6, 1, 2, 5, 4, 8, 9
    };

    std::cout << "(Sortowanie przez wybor) Przed sortowaniem:\n";
    Array_tools::Print_arr(tab, 8);

    Sorting::Selection_sort(tab, 8);

    std::cout << "(Sortowanie przez wybor) Po sortowaniu:\n";
    Array_tools::Print_arr(tab, 8);
}
