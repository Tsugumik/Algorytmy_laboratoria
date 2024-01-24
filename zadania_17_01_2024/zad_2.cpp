#include <iostream>
#include "../zadania.h"
#include "../ciphers/Ciphers.h"
#include "../deciphers/Deciphers.h"

void zadania_17_01_2024::zad_2() {
    std::cout << "== SZYFR XOR ==" << std::endl;
    std::string text = "Ala ma kota";
    std::string cText = Ciphers::XOR(text, "abc");
    std::string dText = Deciphers::XOR(cText, "abc");

    std::cout << "Tekst przed szyfrowaniem: " << text << std::endl;
    std::cout << "Tekst po szyfrowaniu: " << cText << std::endl;
    std::cout << "Tekst po odszyfrowaniu: " << dText << std::endl;
}