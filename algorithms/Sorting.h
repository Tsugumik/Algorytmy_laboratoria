#pragma once
namespace Sorting {
    /**
     * Sortuje podaną tablicę za pomocą algorytmu sortowania bąbelkowego.
     * @param arr - Adres tablicy, która ma zostać posortowana.
     * @param size  - Rozmiar tablicy.
     */
    void Bubble_sort(int arr[], unsigned int size);

    /**
     * Sortuje podaną tablicę za pomocą algorytmu sortowania przez wstawienie.
     * @param arr - Adres tablicy, która ma zostać posortowana.
     * @param size  - Rozmiar tablicy.
     */
    void Insertion_sort(int arr[], unsigned int size);
}
