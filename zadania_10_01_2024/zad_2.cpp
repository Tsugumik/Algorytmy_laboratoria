#include <string>
#include <iostream>
#include "../zadania.h"
#include "../queue/PriorityQueue.h"

void zadania_10_01_2024::zad_2() {
    PriorityQueue<std::string> kolejkaPriorytetowa;

    kolejkaPriorytetowa.add("Amelia", 0);
    kolejkaPriorytetowa.add("Joanna", 0);
    kolejkaPriorytetowa.add("Robert", 5);
    kolejkaPriorytetowa.add("Nikodem", -1);

    for(int i=0; i<4; i++) std::cout << kolejkaPriorytetowa.pop() << std::endl;
}