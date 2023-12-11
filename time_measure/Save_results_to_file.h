#pragma once
#include <vector>
#include <fstream>
#include "Sorting_time_measure.h"

/**
 * @brief Zapisuje wyniki pomiarów czasu sortowania do pliku tekstowego.
 *
 * Funkcja zapisuje wektor czasów trwania sortowania do pliku tekstowego o nazwie
 * zależnej od trybu sortowania (opt, random, pes) oraz wybranego algorytmu sortowania.
 *
 * @param results Wektor zawierający wyniki czasów trwania sortowania.
 * @param results_path Ścieżka do katalogu, w którym mają być zapisane wyniki.
 * @param sort_mode Tryb sortowania (Sorting_mode enum).
 * @param algorithm Wybrany algorytm sortowania (Sorting_algorithms enum).
 */
void Save_results_to_file(const std::vector<unsigned int>& results, const std::string& results_path, Sorting_mode sort_mode, Sorting_algorithms algorithm);