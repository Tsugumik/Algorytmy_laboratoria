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

    /**
     * Sortuje podaną tablicę za pomocą algorytmu sortowania przez wybór.
     * @param tab - Adres tablicy, która ma zostać posortowana.
     * @param size - Rozmiar tablicy.
     */
    void Selection_sort(int tab[], unsigned int size);

    /**
     *
     * @param tab - Adres tablicy.
     * @param left - Indeks lewego elementu
     * @param right - Indeks prawego elementu
     */
    void Quick_sort(int tab[], int left, int right);
}
