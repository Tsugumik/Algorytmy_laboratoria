#include <iostream>
#include <cmath>
#include "../algorithms/Algorithms.h"
#include "../zadania.h"

namespace zadania_25_10_2023 {
    void zad_1() {
        double a, b, c;
        using std::cout, std::cin, std::endl;

        cout << "Podaj dlugosc boku a:";
        cin >> a;
        cout << "Podaj dlugosc boku b:";
        cin >> b;
        cout << "Podaj dlugosc boku c:";
        cin >> c;

        if (Algorithms::Can_triangle_be_formed(a, b, c)) {
            cout << "Z tych bokow moze byc uformowany trojkat." << endl;

            double triangle_perimeter = a + b + c;
            double d = 0.5 * triangle_perimeter;
            double area = sqrt(d * (d - a) * (d - b) * (d - c));

            cout << "Obwod: " << triangle_perimeter << endl;
            cout << "Pole: " << area << endl;
        } else {
            cout << "Z tych bokow nie moze byc uformowany trojkat." << endl;
        }

    }
}