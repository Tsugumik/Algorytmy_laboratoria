#include <iostream>
#include <string>
#include "../zadania.h"
#include "../algorithms/Algorithms.h"

namespace zadania_8_11_2023 {
    void zad_5() {
        using std::cout, std::cin, std::endl;

        std::string str;

        cout << "Podaj wyraz:";
        cin >> str;

        if (Algorithms::Is_palindrome(str)) {
            cout << str << " jest palindromem." << endl;
        } else {
            cout << str << " nie jest palindromem." << endl;
        }
    }
}