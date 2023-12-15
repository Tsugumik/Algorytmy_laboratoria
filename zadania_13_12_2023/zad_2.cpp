#include <string>
#include <iostream>
#include "../algorithms/Algorithms.h"
#include "../zadania.h"

void zadania_13_12_2023::zad_2() {
    std::cout << "Podaj wyrazenie ONP:";
    std::string onp;
    std::getline(std::cin, onp);

    double wynik = Algorithms::Calculate_ONP(onp);

    std::cout << "Wynik: " << wynik << std::endl;
}