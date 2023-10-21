#pragma once

namespace Algorithms {
    /**
     * Funkcja oblicza NWD dla dwóch liczb całkowitych.
     * Wykorzystuje algorytm Euklidesa.
     *
     * Polega to na dzieleniu większej liczby przez mniejszą
     * i zastępowaniu większej liczby resztą z tego dzielenia.
     * Wszystko jest powtarzane do momentu, gdy druga liczba staje się zerem.
     * Na koniec pierwsza liczba zawiera NWD.
     *
     * @param a - Pierwsza liczba całkowita.
     * @param b - Druga liczba całkowita.
     * @return NWD liczb a i b.
     */
    int NWD(int a, int b);

    /**
     * Funkcja oblicza NWW dla dwóch liczb całkowitych.
     *
     * NWW jest obliczane na podstawie wzoru NWW(a, b) = (a * b) / NWD(a, b)
     *
     * @param a - Pierwsza liczba całkowita.
     * @param b - Druga liczba całkowita.
     * @return NWW liczb a i b.
     */
    int NWW(int a, int b);

    /**
     * Funkcja oblicza sumę cyfr liczby całkowitej.
     *
     * Algorytm dodaje do sumy cyfę jedności z podanej liczby
     * a następnie dzieli liczbę przez 10 usuwając z niej ostatnią cyfrę.
     *
     * Procedura jest powtarzana do momentu, kiedy liczba stanie się zerem,
     * co wskazuje na to, że wszystkie cyfry zostały zsumowane.
     *
     * @param n - Liczba całkowita, dla której obliczana jest suma cyfr.
     * @return Suma cyfr liczby.
     */
    int Sum_of_digits(int n);
}

