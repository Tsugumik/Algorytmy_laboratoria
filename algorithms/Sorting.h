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
     * Sortuje podaną tablicę za pomocą algorytmu szybkiego sortowania.
     * @param tab - Adres tablicy.
     * @param left - Indeks lewego elementu
     * @param right - Indeks prawego elementu
     */
    void Quick_sort(int tab[], int left, int right);

    /**
     * Sortuje podaną tablicę za pomocą algorytmy sortowania przez scalenie.
     * @param arr - Adres tablicy.
     * @param size - Rozmiar tablicy.
     */
    void Merge_sort(int arr[], unsigned int size);

    /**
     * Scala tablice powstałe w wyniku sortowania przez scalenie.
     * @param left_arr - Lewa tablica powstała w wyniku podzielenia.
     * @param right_arr - Prawa tablica powstała w wyniku podzielenia.
     * @param arr - Tablica, do której mają zostać scalone tablice lewa i prawa.
     * @param arr_size - Rozmiar tablicy, do której mają zostać scalone tablice lewa i prawa.
     */
    void Merge(int left_arr[], int right_arr[], int arr[], unsigned int arr_size);
}
