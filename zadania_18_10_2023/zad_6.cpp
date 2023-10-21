#include <iostream>
#include "../algorithms/Array_tools.h"

namespace zadania_18_10_2023 {
    void zad_6() {
        using std::cout, std::cin, std::endl;
        using namespace Array_tools;

        const int size = 10;

        int arr[10]{
                1, 2, 3, 4, 5, 6, 7, 8, 9, 10
        };

        cout << Max(arr, size) << endl;
        cout << Min(arr, size) << endl;
        cout << Val_dispersion(arr, size) << endl;
        cout << Avg(arr, size) << endl;
        cout << Sum(arr, size) << endl;
        cout << Standard_deviation(arr, size) << endl;
        cout << Variance(arr, size) << endl;
        cout << Count_divisible_by_3(arr, size) << endl;
        cout << Get_n_element(arr, 1) << endl;
    }
}