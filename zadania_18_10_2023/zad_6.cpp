#include <iostream>
#include "../algorithms/Array_tools.h"

namespace zadania_18_10_2023 {
    void zad_6() {
        using std::cout, std::cin, std::endl;
        using namespace Array_tools;

        int size;

        cout << "Podaj rozmiar tablicy:";
        cin >> size;

        int *arr = new int[size];

        cout << "Przyklad: 7 8 5 5" << endl;
        cout << "Wpisz wszystkie elementy tablicy oddzielone spacjami i zatwierdz enterem:";

        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        cout << "Najwiekszy element: " << Max(arr, size) << endl;
        cout << "Najmniejszy element: " << Min(arr, size) << endl;
        cout << "Rozrzut wartosci: " << Val_dispersion(arr, size) << endl;
        cout << "Srednia arytmetyczna: " << Avg(arr, size) << endl;
        cout << "Suma wartosci: " << Sum(arr, size) << endl;
        cout << "Odchylenie standardowe: " << Standard_deviation(arr, size) << endl;
        cout << "Wariancja: " << Variance(arr, size) << endl;
        cout << "Ilosc elementow podzielnych przez 3: " << Count_divisible_by_3(arr, size) << endl;

        int n;
        cout << "Podaj ktory n-ty element tablicy chcesz wypisac: ";
        cin >> n;

        cout << n << ". element tablicy: " << Get_n_element(arr, 0) << endl;

        delete[] arr;
    }
}