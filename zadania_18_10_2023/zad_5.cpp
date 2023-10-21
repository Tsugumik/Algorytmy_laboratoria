#include <iostream>
#include "../algorithms/Algorithms.h"

namespace zadania_18_10_2023 {
    void zad_5() {
        using std::cout, std::cin, std::endl;
        using Algorithms::Sum_of_digits;

        int a;

        cout << "Podaj liczbe > 1000, ktorej cyfry chcesz zsumowac:";
        cin >> a;

        if (a <= 1000) {
            cout << "Liczba jest zbyt mala";
            return;
        }

        cout << "Suma cyfr liczby " << a << " to " << Sum_of_digits(a) << endl;
    }
}