#include <iostream>
#include "../algorithms/Algorithms.h"

namespace zadania_18_10_2023 {
    void zad_2() {
        using std::cout, std::cin, std::endl;
        int a, b;
        cout << "Podaj liczbe a:";
        cin >> a;
        cout << "Podaj liczbe b:";
        cin >> b;

        cout << "NWD: " << NWD(a, b) << endl;
        cout << "NWW: " << NWW(a, b) << endl;
    }
}