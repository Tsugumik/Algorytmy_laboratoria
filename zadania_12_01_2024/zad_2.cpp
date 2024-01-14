#include <iostream>
#include "../zadania.h"
#include "HanoiTower.h"

void zadania_12_01_2024::zad_2() {
    using std::cout, std::cin, std::endl;
    int numberOfDisks;
    cout << "Podaj ilosc dyskow dla wierzy Hanoi: ";
    cin >> numberOfDisks;

    Tower towerA, towerB, towerC;

    for(int i = numberOfDisks; i > 0; i--) towerA.push(i);

    while(towerC.size() != numberOfDisks) {
        printTowers(towerA, towerB, towerC);

        char source, destination;

        cout << "Podaj wierze z ktorej chcesz przeniesc dysk (A, B, C): ";
        cin >> source;

        cout << "Podaj wierze na ktora chcesz przeniesc dysk (A, B, C): ";
        cin >> destination;

        Tower* sourceTower;
        Tower* destinationTower;

        switch (source) {
            case 'A':
                sourceTower = &towerA;
                break;
            case 'B':
                sourceTower = &towerB;
                break;
            case 'C':
                sourceTower = &towerC;
                break;
            default:
                cout << "Nieprawidlowa opcja!" << endl;
                continue;
        }

        switch (destination) {
            case 'A':
                destinationTower = &towerA;
                break;
            case 'B':
                destinationTower = &towerB;
                break;
            case 'C':
                destinationTower = &towerC;
                break;
            default:
                cout << "Nieprawidlowa opcja!" << endl;
                continue;
        }

        if(!sourceTower->isEmpty() && (destinationTower->isEmpty() || sourceTower->top() < destinationTower->top())) {
            moveDisk(*sourceTower, *destinationTower);
        } else {
            cout << "Niepoprawny ruch!" << endl;
        }

    }

    cout << "Brawo, udalo ci sie wygrac!" << endl;
    printTowers(towerA, towerB, towerC);
}