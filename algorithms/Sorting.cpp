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
        for(int i=0; i<size-1; i++) {

            // Poszukiwanie minimalnego elementu w zbiorze nieposortowanym
            int min_i = i;

            for(int j = i + 1; j<size; j++) {
                if(tab[min_i] > tab[j]) {
                    min_i = j;
                }
            }

            // Jeśli znaleziono mniejszy element zamień go
            if(min_i != i) {
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

        while(i<right) {
            if(arr[i] < pivot) {
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

        if(left < j - 1) {
            Quick_sort(arr, left, j-1);
        }

        if(j+1 < right) {
            Quick_sort(arr, j+1, right);
        }
    }
}
