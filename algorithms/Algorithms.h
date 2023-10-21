#pragma once

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

namespace Array_tools {
    /**
     * Funkcja znajduje maksymalną wartość w tablicy.
     * @param arr - Tablica liczb całkowitych.
     * @param size - Rozmiar tablicy.
     * @return Maksymalna wartość w tablicy.
     */
    int Max(const int arr[], int size);

    /**
     * Funkcja znajduje minimalną wartość w tablicy.
     * @param arr - Tablica liczb całkowitych.
     * @param size - Rozmiar tablicy.
     * @return Minimalna wartość w tablicy.
     */
    int Min(const int arr[], int size);

    /**
     * Funkcja oblicza rozrzut wartości w tablicy.
     * @param arr - Tablica liczb całkowitych.
     * @param size - Rozmiar tablicy.
     * @return Rozrzut wartości w tablicy.
     */
    int Val_dispersion(const int arr[], int size);

    /**
     * Funkcja oblicza średnią elementów w tablicy.
     * Przeciążenie dla tablicy liczb całkowitych.
     * @param arr - Tablica liczb całkowitych.
     * @param size - Rozmiar tablicy.
     * @return Średnia arytmetyczna elementów w tablicy.
     */
    double Avg(const int arr[], int size);

    /**
     * Funkcja oblicza średnią elementów w tablicy.
     * Przeciążenie dla tablicy liczb zmiennoprzecinkowych.
     * @param arr - Tablica liczb zmiennoprzecinkowych.
     * @param size - Rozmiar tablicy.
     * @return Średnia arytmetyczna elementów w tablicy.
     */
    double Avg(const double arr[], int size);

    /**
     * Funkcja iteracyjnie oblicza sumę wszystkich elementów w tablicy.
     * Przeciążenie dla tablicy liczb całkowitych.
     * @param arr - Tablica liczb całkowitych.
     * @param size - Rozmiar tablicy.
     * @return Suma wszystkich elementów w tablicy.
     */
    int Sum(const int arr[], int size);

    /**
     * Funkcja iteracyjnie oblicza sumę wszystkich elementów w tablicy.
     * Przeciążenie dla tablicy liczb zmiennoprzecinkowych.
     * @param arr - Tablica liczb zmiennoprzecinkowych.
     * @param size - Rozmiar tablicy.
     * @return Suma wszystkich elementów w tablicy.
     */
    double Sum(const double arr[], int size);

    /**
     * Funkcja oblicza odchylenie standardowe.
     * @param arr - Tablica liczb całkowitych.
     * @param size - Rozmiar tablicy.
     * @return Odchylenie standardowe tablicy.
     */
    double Standard_deviation(const int arr[], int size);

    /**
     * Funkcja oblicza wariancję.
     * @param arr - Tablica liczb całkowitych.
     * @param size - Rozmiar tablicy.
     * @return Wariancja tablicy.
     */
    double Variance(const int arr[], int size);

    /**
     * Funkcja zwraca n-ty element tablicy.
     * @param arr - Tablica liczb całkowitych.
     * @param n - Numer elementu, który ma zostać zwrócony.
     * @return N-ty element tablicy.
     */
    int Get_n_element(const int arr[], int n);

    /**
     * Funkcja zwraca ilość elementów w tablicy podzielnych przez 3.
     * @param arr - Tablica liczb całkowitych.
     * @param size - Rozmiar tablicy.
     * @return Ilość elementów podzielnych przez 3 w tablicy.
     */
    int Count_divisible_by_3(const int arr[], int size);
}