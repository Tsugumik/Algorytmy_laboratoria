#pragma once

namespace Math_functions {
    /**
     * Funkcja oblicza silnię liczby całkowitej.
     * @param n - Liczba całkowita, dla której obliczana jest silnia.
     * @return Silnia liczby n.
     */
    int Factorial(int n);

    /**
     * Funkcja rekurencyjnie oblicza silnię liczby całkowitej.
     * @param n - Liczba całkowita, dla której obliczana jest silnia.
     * @return Silnia liczby n.
     */
    int Factorial_rec(int n);

    /**
     * Funkcja oblicza a do potęgi n.
     * @param a - Podstawa potęgi.
     * @param n - Wykładnik potęgi.
     * @return Wynik potęgowania a do potęgi n.
     */
    int POW(int a, int n);

    /**
     * Funkcja oblicza a do potęgi n
     * Przeciążenie dla liczb podstawy zmiennoprzecinkowej.
     * @param a - Podstawa potęgi.
     * @param n - Wykładnik potęgi.
     * @return Wynik potęgowania a do potęgi n.
     */
    double POW(double a, int n);

    /**
     * Funkcja oblicza deltę dla równania kwadratowego ax^2 + bx + c.
     * @param a - Współczynnik a.
     * @param b - Współczynnik b.
     * @param c - Współczynnik c.
     * @return Delta równania kwadratowego.
     */
    double Delta(const double &a, const double &b, const double &c);

    /**
     * Funkcja rozwiązuje równanie kwadratowe ax^2 + bx + c.
     * Wyświetla pierwiastki równania lub informację o ich braku.
     * @param a - Współczynnik a.
     * @param b - Współczynnik b.
     * @param c - Współczynnik c.
     */
    void Quadratic_equation(const double &a, const double &b, const double &c);

    /**
     * Funkcja rozwiązuje równanie liniowe ax + b.
     * Wyświetla pierwiastek równania lub informację o braku rozwiązania.
     * @param a - Współczynnik a.
     * @param b - Współczynnik b.
     */
    void Linear_equation(const double &a, const double &b);
}