#include <iostream>
#include <string>
#include "../algorithms/Algorithms.h"
#include "../zadania.h"

namespace zadania_8_11_2023 {
    void zad_3() {
        using std::cout, std::cin, std::endl;

        int dec;
        std::string hex;

        cout << "Podaj liczbe w systemie dziesietnym:";
        cin >> dec;

        cout << "Ta liczba zapisana szesnastkowo to: " << Converters::Dec_to_hex(dec) << endl;

        cout << "Podaj liczbe w systemie szesnastkowym:";
        cin >> hex;

        cout << "Ta liczba zapisana dziesietnie to:" << Converters::Hex_to_dec(hex);
    }
}