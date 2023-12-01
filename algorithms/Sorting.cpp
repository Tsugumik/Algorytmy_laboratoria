#include "Sorting.h"

namespace Sorting {
    void Bubble_sort(int arr[], unsigned int size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int tmp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }

    void Insertion_sort(int arr[], unsigned int size) {
        for (int i = 1; i < size; i++) {
            int sortingElement = arr[i], j = i - 1;

            while (j >= 0 && arr[j] > sortingElement) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = sortingElement;
        }
    }

    void Selection_sort(int tab[], unsigned int size) {
        for (int i = 0; i < size - 1; i++) {
            // Poszukiwanie minimalnego elementu w zbiorze nieposortowanym
            int min_i = i;

            for (int j = i + 1; j < size; j++) {
                if (tab[min_i] > tab[j]) {
                    min_i = j;
                }
            }

            // Jeśli znaleziono mniejszy element zamień go
            if (min_i != i) {
                int tmp = tab[min_i];
                tab[min_i] = tab[i];
                tab[i] = tmp;
            }
        }
    }

    void Quick_sort(int arr[], int left, int right) {
        int i = (left + right) / 2;
        int pivot = arr[i];
        arr[i] = arr[right];
        int j = left;
        i = left;

        while (i < right) {
            if (arr[i] < pivot) {
                // SWAP
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j = j + 1;
            }
            i = i + 1;
        }

        arr[right] = arr[j];
        arr[j] = pivot;

        if (left < j - 1) {
            Quick_sort(arr, left, j - 1);
        }

        if (j + 1 < right) {
            Quick_sort(arr, j + 1, right);
        }
    }

    void Merge_sort(int arr[], unsigned int size) {
        if (size <= 1) return;
        unsigned int middle = size / 2;

        // Tworzenie dwóch tablic względem środka
        int *left_arr = new int[middle];
        int *right_arr = new int[size - middle];

        int i = 0;
        int j = 0;

        // Kopiowanie wartości do lewej i prawej tablicy
        while (i < size) {
            if (i < middle) {
                left_arr[i] = arr[i];
                i += 1;
            } else {
                right_arr[j] = arr[i];
                j += 1;
                i += 1;
            }
        }

        /*
         * Reukrencyjne wykonywanie algorytmu na lewej i prawej stronie tablicy głównej
         * do momentu osiągnięcia w lewej i prawej tylko jednego elementu
         */
        Merge_sort(left_arr, middle);
        Merge_sort(right_arr, size - middle);

        /*
         * Po udanym procesie dzielenia tablic
         * wykonywane jest scalanie
         */
        Merge(left_arr, right_arr, arr, size);
    }

    void Merge(int left_arr[], int right_arr[], int arr[], unsigned int arr_size) {
        unsigned int left_arr_size = arr_size / 2;
        unsigned int right_arr_size = arr_size - left_arr_size;

        unsigned int i = 0, left = 0, right = 0;

        // Scalanie lewej i prawej tablicy do tablicy głównej
        while (left < left_arr_size && right < right_arr_size) {
            // Jeśli element z lewej tablicy jest mniejszy, zapisz go w tablicy głównej
            if (left_arr[left] < right_arr[right]) {
                arr[i] = left_arr[left];
                i += 1;
                left += 1;
            } else {
                // W przeciwnym razie zapisz element z prawej tablicy
                arr[i] = right_arr[right];
                i += 1;
                right += 1;
            }
        }

        // Zapisywanie pozostałych elementów z lewej tablicy, jeśli istnieją
        while (left < left_arr_size) {
            arr[i] = left_arr[left];
            i += 1;
            left += 1;
        }

        // Zapisywanie pozostałych elementów z prawej tablicy, jeśli istnieją
        while (right < right_arr_size) {
            arr[i] = right_arr[right];
            i += 1;
            right += 1;
        }

        // Zwalnianie pamięci przydzielonej w funkcji Merge_sort
        delete[] left_arr;
        delete[] right_arr;
    }
}
