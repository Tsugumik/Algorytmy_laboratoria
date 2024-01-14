#include <string>
#include <stdexcept>
#include <iostream>
#include "DataStructureManagers.h"
#include "../zadania.h"


void zadania_12_01_2024::zad_1() {
    using std::cout, std::cin, std::string, std::cerr;
    unsigned char choice;
    IDataStructure<string>* structure = nullptr;

    do {
        cout << "Menu:\n";
        cout << "1. Utworz i uzywaj stosu\n";
        cout << "2. Utworz i uzywaj kolejki\n";
        cout << "3. Utworz i uzywaj wektora\n";
        cout << "0. Wyjscie\n";
        cout << "Wybierz opcje: ";
        cin >> choice;

        delete structure;

        switch (choice) {
            case '1':
                structure = new StackManager<string>();
                break;
            case '2':
                structure = new QueueManager<string>();
                break;
            case '3':
                structure = new VectorManager<string>();
                break;
            case '0':
                cout << "Wyjscie z programu\n";
                break;
            default:
                cout << "Nieprawidlowy wybor. Sprobuj ponownie.\n";
                break;
        }

        unsigned char choice_sec;
        if(structure != nullptr) {
            cout << "\nOperacje na strukturze danych:\n";
            cout << "1. Dodaj element\n";
            cout << "2. Usun element\n";
            cout << "3. Pobierz pierwszy element\n";
            cout << "4. Pobierz ostatni element\n";
            cout << "5. Pobierz n-ty element\n";
            cout << "6. Sprawdz, czy element istnieje\n";
            cout << "7. Pobierz wielkosc struktury\n";
            cout << "8. Sprawdz, czy struktura jest pusta\n";
            cout << "0. Wroc do menu glownego\n";

            do {
                cout << "Wybierz opcję: ";
                cin >> choice_sec;

                string value;
                switch(choice_sec) {
                    case '1':
                        cout << "Podaj wartosc do dodania: ";
                        cin >> value;
                        structure->add(value);
                        break;
                    case '2':
                        try {
                            structure->pop();
                            cout << "Element usuniety.\n";
                        } catch (const std::underflow_error& e) {
                            cerr << e.what() << '\n';
                        }
                        break;
                    case '3':
                        try {
                            cout << "Pierwszy element: " << structure->first() << '\n';
                        } catch (const std::underflow_error& e) {
                            cerr << e.what() << '\n';
                        }
                        break;
                    case '4':
                        try {
                            cout << "Ostatni element: " << structure->last() << '\n';
                        } catch (const std::underflow_error& e) {
                            cerr << e.what() << '\n';
                        }
                        break;
                    case '5':
                        unsigned int index;
                        cout << "Podaj indeks n-tego elementu: ";
                        cin >> index;
                        try {
                            cout << "Element o indeksie " << index << ": " << structure->getN(index) << '\n';
                        } catch (const std::out_of_range& e) {
                            cerr << e.what() << '\n';
                        }
                        break;
                    case '6':
                        cout << "Podaj wartosc do sprawdzenia: ";
                        cin >> value;
                        cout << (structure->find(value) ? "Element istnieje.\n" : "Element nie istnieje.\n");
                        break;
                    case '7':
                        cout << "Wielkosc struktury: " << structure->size() << '\n';
                        break;
                    case '8':
                        cout << (structure->isEmpty() ? "Struktura jest pusta.\n" : "Struktura nie jest pusta.\n");
                        break;
                    case '0':
                        cout << "Powrot do menu glownego.\n";
                        break;
                    default:
                        cout << "Nieprawidlowy wybor. Sprobuj ponownie.\n";
                        break;

                }
            } while (choice_sec != '0');
        }
    } while (choice != '0');
}