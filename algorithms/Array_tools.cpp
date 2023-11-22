#include "Math_functions.h"
#include "Array_tools.h"


namespace Array_tools {
    int Max(const int arr[], const int size) {
        int max = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > max) max = arr[i];
        }
        return max;
    }

    int Min(const int arr[], int size) {
        int min = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] < min) min = arr[i];
        }
        return min;
    }

    int Val_dispersion(const int arr[], int size) {
        return Max(arr, size) - Min(arr, size);
    }

    double Avg(const int arr[], int size) {
        int sum = Sum(arr, size);
        return (double) sum / size;
    }

    double Avg(const double arr[], int size) {
        double sum = Sum(arr, size);
        return sum / size;
    }

    int Sum(const int arr[], int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }

    double Sum(const double arr[], int size) {
        double sum = 0.0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }

    double Standard_deviation(const int arr[], int size) {
        return sqrt(Variance(arr, size));
    }

    double Variance(const int arr[], int size) {
        double diff_squares[size];

        // Oblicza średnią arytmetyczną elementów w tablicy
        double avg = Avg(arr, size);

        // Oblicza kwadraty różnic między elementami a średnią arytmetyczną
        for (int i = 0; i < size; i++) {
            diff_squares[i] = Math_functions::POW(arr[i] - avg, 2);
        }

        // Oblicza średnią arytmetyczną kwadratów różnic
        double diff_squares_avg = Avg(diff_squares, size);

        return diff_squares_avg;

    }

    int Get_n_element(const int arr[], int n) {
        return arr[n];
    }

    int Count_divisible_by_3(const int arr[], int size) {
        int count = 0;

        for (int i = 0; i < size; i++) {
            if (arr[i] % 3 == 0) {
                count++;
            }
        }

        return count;
    }
}