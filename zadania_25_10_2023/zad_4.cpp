#include <iostream>
#include "../zadania.h"

namespace zadania_25_10_2023 {
    void zad_4() {
        using std::cout, std::cin, std::endl;
        double a, b;

        cout << "Podaj a:";
        cin >> a;
        cout << "Podaj b:";
        cin >> b;

        if (b == 0) {
            cout << "b nie moze byc zerem. Nie mozna dzielic przez 0!" << endl;
            return;
        }

        double suma = a + b;
        double roznica = a - b;
        double iloczyn = a * b;
        double iloraz = a / b;

        cout << "a + b = " << suma << endl;
        cout << "a - b = " << roznica << endl;
        cout << "a * b = " << iloczyn << endl;
        cout << "a / b = " << iloraz << endl;

    }
}