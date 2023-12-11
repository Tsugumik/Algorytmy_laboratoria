#pragma once
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

/**
 * Funkcja generuje trzy zestawy danych testowych:
 * 1. Zbiór posortowany rosnąco o rozmiarze 500 elementów.
 * 2. Zbiór posortowany malejąco o rozmiarze 500 elementów.
 * 3. Zbiór z danymi losowymi o rozmiarze 500 elementów.
 *
 * @param path Ścieżka do katalogu, w którym zostaną zapisane pliki z danymi testowymi.
 *             Funkcja utworzy pliki "ascending500.txt", "descending500.txt" i "random500.txt".
 */
void Gen_time_test_data(const std::string& path);