#include <iostream>
#include "../algorithms/Math_functions.h"

namespace zadania_18_10_2023 {
    void zad_4() {
        using std::cout, std::cin, std::endl;
        using Math_functions::POW;

        int a, n;

        cout << "Podaj podstawe potegi:";
        cin >> a;
        cout << "Podaj wykladnik potegi:";
        cin >> n;

        std::cout << a << "^" << n << " = " << POW(a, n) << endl;
    }
}