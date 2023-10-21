#include <iostream>
#include "../algorithms/Math_functions.h"

namespace zadania_18_10_2023 {
    void zad_7() {
        using std::cout, std::cin, std::endl;
        using namespace Math_functions;

        int a, b, c;
        cout << "Podaj wspolczynnik a:";
        cin >> a;
        cout << "Podaj wspolczynnik b:";
        cin >> b;
        cout << "Podaj wspolczynnik c:";
        cin >> c;

        if (a == 0) {
            Linear_equation(b, c);
        } else {
            Quadratic_equation(a, b, c);
        }
    }
}