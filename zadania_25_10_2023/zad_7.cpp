#include <iostream>
#include "../algorithms/Algorithms.h"
#include "../zadania.h"

namespace zadania_25_10_2023 {
    void zad_7() {
        using std::cout, std::cin, std::endl;
        int n;
        cout << "Podaj liczbe:";
        cin >> n;

        if (Algorithms::Is_prime(n)) {
            cout << n << " to liczba pierwsza." << endl;
        } else {
            cout << n << " nie jest liczba pierwsza." << endl;
        }
    }
}