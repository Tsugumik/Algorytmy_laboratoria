#include <iostream>
#include "../algorithms/Math_functions.h"

namespace zadania_18_10_2023 {
    void zad_3() {
        using namespace Math_functions;
        using std::cout, std::cin, std::endl;

        int n;

        cout << "Z jakiej liczby chcesz obliczyc silnie:";
        cin >> n;

        cout << "Iteracyjnie:" << n << "! = " << Factorial(n) << endl;
        cout << "Rekurencyjnie:" << n << "! = " << Factorial_rec(n) << endl;
    }
}