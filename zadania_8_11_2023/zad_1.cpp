#include <iostream>
#include "../zadania.h"
#include "../algorithms/Algorithms.h"

namespace zadania_8_11_2023 {
    void zad_1() {
        using std::cout, std::cin, std::endl;

        /*
         * Wypisywanie liczb doskonałych
         * w przedziale <2;30>
         */

        for (int i = 2; i <= 30; i++) {
            if (Algorithms::Is_number_perfect(i)) {
                cout << i << " ";
            }
        }

    }
}