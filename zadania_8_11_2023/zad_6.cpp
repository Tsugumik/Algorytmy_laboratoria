#include <iostream>
#include <string>
#include "../algorithms/Algorithms.h"
#include "../zadania.h"

namespace zadania_8_11_2023 {
    void zad_6() {
        using std::cout, std::cin, std::endl;

        std::string pesel;
        cout << "Podaj PESEL:";
        cin >> pesel;

        if (Algorithms::Is_pesel_valid(pesel)) {
            cout << "PESEL jest poprawny." << endl;
        } else {
            cout << "PESEL nie jest poprawny";
        }
    }
}