#pragma once

#include <vector>
#include "Sorting_time_measure.h"

/**
 * @brief Mierzy czas sortowania dla określonego algorytmu i różnych rozmiarów danych.
 *
 * Funkcja wykonuje pomiar czasu sortowania dla podanego algorytmu sortowania
 * oraz dla różnych rozmiarów danych zdefiniowanych w wektorze 'limits'.
 * Wyniki są zbierane w jednym wektorze i zwracane.
 *
 * @param algorithm Wybrany algorytm sortowania (Sorting_algorithms enum).
 * @param limits Wektor zawierający różne rozmiary danych do przetestowania.
 * @param replies_per_limit Ilość powtórzeń sortowania dla uzyskania średniego czasu.
 * @param data_file Ścieżka do pliku zawierającego dane testowe.
 * @return Wektor czasów trwania sortowania dla każdego rozmiaru danych.
 */
std::vector<unsigned int>
Measure_specific(Sorting_algorithms algorithm, const std::vector<unsigned int> &limits, unsigned int replies_per_limit,
                 const std::string &data_file);