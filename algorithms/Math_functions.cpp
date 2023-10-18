#include <cmath>
#include <iostream>

namespace Math_functions {
    /**
     * Funkcja oblicza silnię liczby całkowitej.
     * @param n - Liczba całkowita, dla której obliczana jest silnia.
     * @return Silnia liczby n.
     */
    int Factorial(int n) {
        int factorial = 1;

        for(int i=n; i>1; i--) {
            factorial = factorial * i;
        }

        return factorial;
    }

    /**
     * Funkcja rekurencyjnie oblicza silnię liczby całkowitej.
     * @param n - Liczba całkowita, dla której obliczana jest silnia.
     * @return Silnia liczby n.
     */
    int Factorial_rec(int n) {
        if(n < 2) {
            return 1;
        } else {
            return n * Factorial_rec(n-1);
        }
    }

    /**
     * Funkcja oblicza a do potęgi n.
     * @param a - Podstawa potęgi.
     * @param n - Wykładnik potęgi.
     * @return Wynik potęgowania a do potęgi n.
     */
    int POW(int a, int n) {
        if(a == 0) {
            return 1;
        } else if(a == 1) {
            return a;
        }

        int pow = a;

        for(int i = 1; i<n; i++) {
            pow = pow * a;
        }

        return pow;
    }

    /**
     * Funkcja oblicza a do potęgi n
     * Przeciążenie dla liczb podstawy zmiennoprzecinkowej.
     * @param a - Podstawa potęgi.
     * @param n - Wykładnik potęgi.
     * @return Wynik potęgowania a do potęgi n.
     */
    double POW(double a, int n) {
        if(a == 0) {
            return 1;
        } else if(a == 1) {
            return a;
        }

        double pow = a;

        for(int i = 1; i<n; i++) {
            pow = pow * a;
        }

        return pow;
    }

    /**
     * Funkcja oblicza deltę dla równania kwadratowego ax^2 + bx + c.
     * @param a - Współczynnik a.
     * @param b - Współczynnik b.
     * @param c - Współczynnik c.
     * @return Delta równania kwadratowego.
     */
    double Delta(const double& a, const double& b, const double& c) {
        return POW(b, 2) - (4 * a * c);
    }

    /**
     * Funkcja rozwiązuje równanie kwadratowe ax^2 + bx + c.
     * Wyświetla pierwiastki równania lub informację o ich braku.
     * @param a - Współczynnik a.
     * @param b - Współczynnik b.
     * @param c - Współczynnik c.
     */
    void Quadratic_equation(const double& a, const double& b, const double& c) {
        using std::cout, std::endl;

        double delta = Delta(a, b, c);

        double x1, x2;

        if(delta == 0) {
            x1 = -b/(2*a);
            cout << "x1 = " << x1 << endl;
            return;
        }

        if(delta < 0) {
            cout << "Brak pierwiastkow dla danego rownania!" << endl;
            return;
        }

        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);

        cout << "x1 = " << x1 << " x2 = " << x2 << endl;

    }

    /**
     * Funkcja rozwiązuje równanie liniowe ax + b.
     * Wyświetla pierwiastek równania lub informację o braku rozwiązania.
     * @param a - Współczynnik a.
     * @param b - Współczynnik b.
     */
    void Linear_equation(const double& a, const double& b) {
        using std::cout, std::endl;
        double x;

        if(a == 0) {
            if(b == 0) {
                cout << "Rownanie jest tozsamosciowe!" << endl;
                return;
            }
            cout << "Rownanie jest sprzeczne!" << endl;
        } else {
            x = -b/a;
            cout << "x = " << x << endl;
            return;
        }
    }
}