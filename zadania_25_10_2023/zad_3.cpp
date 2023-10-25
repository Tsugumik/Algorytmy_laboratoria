#include <iostream>
#include "../zadania.h"

namespace zadania_25_10_2023 {
    void zad_3() {
        using std::cout, std::cin, std::endl;

        int n;

        cout << "Podaj ile elementow ciagu Fibonacciego chcesz wygenerowac:";
        cin >> n;

        int a = 0, b = 1;

        if (n >= 1) cout << a << " ";
        if (n >= 2) cout << b << " ";

        for (int i = 3; i <= n; i++) {
            int c = a + b; // Obliczanie kolejnego elementu ciągu
            cout << c << " ";
            a = b;
            b = c;
        }

        cout << endl;
    }
}