#pragma once

namespace Array_tools {
    /**
     * Funkcja znajduje maksymalną wartość w tablicy.-
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


