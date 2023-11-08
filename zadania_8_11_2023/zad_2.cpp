#include <iostream>
#include <string>
#include "../algorithms/Algorithms.h"
#include "../zadania.h"

namespace zadania_8_11_2023 {
    void zad_2() {
        using std::cout, std::cin, std::endl;

        int dec;
        std::string bin;

        cout << "Podaj liczbe w systemie dziesietnym:";
        cin >> dec;

        cout << "Ta liczba zapisana binarnie to: " << Converters::Dec_to_bin(dec) << endl;

        cout << "Podaj liczbe w systemie dwojkowym:";
        cin >> bin;

        cout << "Ta liczba zapisana dziesietnie to:" << Converters::Bin_to_dec(bin);
    }
}