#include "../zadania.h"
#include "../algorithms/Array_tools.h"
#include "../algorithms/Sorting.h"

void zadania_22_11_2023::zad_2() {
    int tab[8] {
            8,1,9,9,9,8,3,2
    };

    std::cout << "(Szybkie sortowanie) Przed sortowaniem:\n";
    Array_tools::Print_arr<int>(tab, 8);

    Sorting::Quick_sort(tab, 0, 7);

    std::cout << "(Szybkie sortowanie) Po sortowaniu:\n";
    Array_tools::Print_arr<int>(tab, 8);
}