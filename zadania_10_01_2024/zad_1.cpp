#include <string>
#include <iostream>
#include "../zadania.h"
#include "../queue/Queue.h"

void zadania_10_01_2024::zad_1() {
    Queue<std::string> kolejka;

    kolejka.add("Amelia");
    kolejka.add("Joanna");
    kolejka.add("Robert");
    kolejka.add("Nikodem");

    for (int i = 0; i < 4; i++) std::cout << kolejka.pop() << std::endl;
}