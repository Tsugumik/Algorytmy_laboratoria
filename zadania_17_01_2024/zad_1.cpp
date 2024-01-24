#include <iostream>
#include "../zadania.h"
#include "../ciphers/Ciphers.h"
#include "../deciphers/Deciphers.h"

void zadania_17_01_2024::zad_1() {
    std::cout << "== SZYFR CEZARA ==" << std::endl;
    std::string text = "Ala ma kota";
    std::string cText = Ciphers::Caesar(text, 10);
    std::string dText = Deciphers::Caesar(cText, 10);

    std::cout << "Tekst przed szyfrowaniem: " << text << std::endl;
    std::cout << "Tekst po szyfrowaniu: " << cText << std::endl;
    std::cout << "Tekst po odszyfrowaniu: " << dText << std::endl;
}