#pragma once

#include <chrono>
#include "../algorithms/Sorting.h"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>

enum class Sorting_algorithms {
    BUBBLE,
    INSERTION,
    SELECTION,
    QUICK,
    MERGE
};

enum class Sorting_mode {
    OPTIMISTIC,
    PESIMISTIC,
    RANDOM
};

/**
 * @brief Mierzy czas sortowania danych za pomocą wybranego algorytmu sortowania.
 *
 * Funkcja wczytuje dane z pliku, następnie sortuje je za pomocą wybranego algorytmu sortowania
 * określonego przez parametr 'algorithm'. Mierzy czas trwania sortowania i zapisuje wyniki
 * w postaci wektora czasów trwania operacji sortowania.
 *
 * @param data_file_path Ścieżka do pliku zawierającego dane do posortowania.
 * @param bufor_size Rozmiar bufora danych do wczytania.
 * @param replies Ilość powtórzeń sortowania dla uzyskania średniego czasu.
 * @param algorithm Wybrany algorytm sortowania.
 * @return Wektor czasów trwania sortowania dla każdego powtórzenia.
 *         Pusty wektor jest zwracany w przypadku błędu wczytywania danych.
 */
std::vector<unsigned int>
Sorting_time_measure(const std::string &data_file_path, unsigned int bufor_size, unsigned int replies,
                     Sorting_algorithms algorithm);
