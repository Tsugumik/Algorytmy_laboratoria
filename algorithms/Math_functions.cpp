#include <cmath>
#include <iostream>
#include "Math_functions.h"

namespace Math_functions {
    int Factorial(int n) {
        int factorial = 1;

        for (int i = n; i > 1; i--) {
            factorial = factorial * i;
        }

        return factorial;
    }

    int Factorial_rec(int n) {
        if (n < 2) {
            return 1;
        } else {
            return n * Factorial_rec(n - 1);
        }
    }

    int POW(int a, int n) {
        if (n == 0) {
            return 1;
        }

        int pow = a;

        for (int i = 1; i < n; i++) {
            pow = pow * a;
        }

        return pow;
    }

    double POW(double a, int n) {
        if (n == 0) {
            return 1;
        }

        double pow = a;

        for (int i = 1; i < n; i++) {
            pow = pow * a;
        }

        return pow;
    }

    double Delta(const double &a, const double &b, const double &c) {
        return POW(b, 2) - (4 * a * c);
    }

    void Quadratic_equation(const double &a, const double &b, const double &c) {
        using std::cout, std::endl;

        double delta = Delta(a, b, c);

        double x1, x2;

        if (delta == 0) {
            x1 = -b / (2 * a);
            cout << "x1 = " << x1 << endl;
            return;
        }

        if (delta < 0) {
            cout << "Brak pierwiastkow dla danego rownania!" << endl;
            return;
        }

        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);

        cout << "x1 = " << x1 << " x2 = " << x2 << endl;

    }

    void Linear_equation(const double &a, const double &b) {
        using std::cout, std::endl;
        double x;

        if (a == 0) {
            if (b == 0) {
                cout << "Rownanie jest tozsamosciowe!" << endl;
                return;
            }
            cout << "Rownanie jest sprzeczne!" << endl;
            return;
        } else {
            x = -b / a;
            cout << "x = " << x << endl;
            return;
        }
    }
}