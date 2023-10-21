#include <cmath>
#include "Math_functions.h"
#include "Algorithms.h"

using namespace Math_functions;

namespace Array_tools {
    /**
     * Funkcja znajduje maksymalną wartość w tablicy.
     * @param arr - Tablica liczb całkowitych.
     * @param size - Rozmiar tablicy.
     * @return Maksymalna wartość w tablicy.
     */
    int Max(const int arr[], const int size) {

        int max = arr[0];
        for(int i=1; i<size; i++) {
            if(arr[i] > max) max = arr[i];
        }
        return max;
    }

    /**
     * Funkcja znajduje minimalną wartość w tablicy.
     * @param arr - Tablica liczb całkowitych.
     * @param size - Rozmiar tablicy.
     * @return Minimalna wartość w tablicy.
     */
    int Min(const int arr[], int size) {
        int min = arr[0];
        for(int i=1; i<size; i++) {
            if(arr[i] < min) min = arr[i];
        }
        return min;
    }

    /**
     * Funkcja oblicza rozrzut wartości w tablicy.
     * @param arr - Tablica liczb całkowitych.
     * @param size - Rozmiar tablicy.
     * @return Rozrzut wartości w tablicy.
     */
    int Val_dispersion(const int arr[], int size) {
        return Max(arr, size) - Min(arr, size);
    }

    /**
     * Funkcja oblicza średnią elementów w tablicy.
     * Przeciążenie dla tablicy liczb całkowitych.
     * @param arr - Tablica liczb całkowitych.
     * @param size - Rozmiar tablicy.
     * @return Średnia arytmetyczna elementów w tablicy.
     */
    double Avg(const int arr[], int size) {
        int sum = Sum(arr, size);
        return (double)sum/size;
    }

    /**
     * Funkcja oblicza średnią elementów w tablicy.
     * Przeciążenie dla tablicy liczb zmiennoprzecinkowych.
     * @param arr - Tablica liczb zmiennoprzecinkowych.
     * @param size - Rozmiar tablicy.
     * @return Średnia arytmetyczna elementów w tablicy.
     */
    double Avg(const double arr[], int size) {
        double sum = Sum(arr, size);
        return sum/size;
    }

    /**
     * Funkcja iteracyjnie oblicza sumę wszystkich elementów w tablicy.
     * Przeciążenie dla tablicy liczb całkowitych.
     * @param arr - Tablica liczb całkowitych.
     * @param size - Rozmiar tablicy.
     * @return Suma wszystkich elementów w tablicy.
     */
    int Sum(const int arr[], int size) {
        int sum = 0;
        for(int i=0; i<size; i++) {
            sum += arr[i];
        }
        return sum;
    }

    /**
     * Funkcja iteracyjnie oblicza sumę wszystkich elementów w tablicy.
     * Przeciążenie dla tablicy liczb zmiennoprzecinkowych.
     * @param arr - Tablica liczb zmiennoprzecinkowych.
     * @param size - Rozmiar tablicy.
     * @return Suma wszystkich elementów w tablicy.
     */
    double Sum(const double arr[], int size) {
        double sum = 0.0;
        for(int i=0; i<size; i++) {
            sum += arr[i];
        }
        return sum;
    }

    /**
     * Funkcja oblicza odchylenie standardowe.
     * @param arr - Tablica liczb całkowitych.
     * @param size - Rozmiar tablicy.
     * @return Odchylenie standardowe tablicy.
     */
    double Standard_deviation(const int arr[], int size) {
        return sqrt(Variance(arr, size));
    }

    /**
     * Funkcja oblicza wariancję.
     * @param arr - Tablica liczb całkowitych.
     * @param size - Rozmiar tablicy.
     * @return Wariancja tablicy.
     */
    double Variance(const int arr[], int size) {
        double diff_squares[size];

        // Oblicza średnią arytmetyczną elementów w tablicy
        double avg = Avg(arr, size);

        // Oblicza kwadraty różnic między elementami a średnią arytmetyczną
        for(int i=0; i<size; i++) {
            diff_squares[i] = POW(arr[i] - avg, 2);
        }

        // Oblicza średnią arytmetyczną kwadratów różnic
        double diff_squares_avg = Avg(diff_squares, size);

        return diff_squares_avg;

    }

    /**
     * Funkcja zwraca n-ty element tablicy.
     * @param arr - Tablica liczb całkowitych.
     * @param n - Numer elementu, który ma zostać zwrócony.
     * @return N-ty element tablicy.
     */
    int Get_n_element(const int arr[], int n) {
        return arr[n];
    }

    /**
     * Funkcja zwraca ilość elementów w tablicy podzielnych przez 3.
     * @param arr - Tablica liczb całkowitych.
     * @param size - Rozmiar tablicy.
     * @return Ilość elementów podzielnych przez 3 w tablicy.
     */
    int Count_divisible_by_3(const int arr[], int size) {
        int count = 0;

        for(int i=0; i<size; i++) {
            if(arr[i] % 3 == 0) {
                count++;
            }
        }

        return count;
    }
}