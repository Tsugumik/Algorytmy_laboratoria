#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../zadania.h"

namespace zadania_25_10_2023 {
    void zad_5() {
        using std::cout, std::cin, std::endl;
        srand(time(nullptr));

        // Losowanie liczby <1; 15>
        int randomNumber = rand() % 15 + 1;
        int attempts = 0;
        bool win = false;

        while (!win) {
            int guess;
            cout << "Podaj liczbe (1-15):";
            cin >> guess;
            attempts++;
            if (guess == randomNumber) {
                win = true;
            } else if (guess > randomNumber) {
                cout << "Poszukiwana liczba jest mniejsza." << endl;
            } else {
                cout << "Poszukiwana liczba jest wieksza." << endl;
            }
        }

        cout << "Odgadles liczbe po " << attempts << " probach!" << endl;

    }
}