#include "Sorting.h"

namespace Sorting {
    void Bubble_sort(int arr[], unsigned int size) {
        for(int i=0; i < size - 1; i++) {
            for(int j=0; j<size - i - 1; j++) {
                if(arr[j] > arr[j+1]) {
                    int tmp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }

    void Insertion_sort(int arr[], unsigned int size) {
        for(int i=1; i < size; i++) {
            int sortingElement = arr[i], j = i - 1;

            while(j >= 0 && arr[j] > sortingElement) {
                arr[j+1] = arr[j];
                j--;
            }

            arr[j+1] = sortingElement;
        }
    }
}
