#pragma once

#include <vector>

namespace Matrix_tools {
    /**
     * Funkcja wypisuje macierz kwadratową do standardowego wyjścia.
     * Macierz jest przekazywana przez stałą referencje aby uniknąć kopiowania.
     * @param matrix - Macierz kwadratowa.
     */
    void Print_square_matrix(const std::vector<std::vector<double>> &matrix);

    /**
     * Funkcja wczytuje macierz kwadratową od użytkownika.
     * @param matrix - Referencja do macierzy kwadratowej, która ma zostać uzupełniona.
     */
    void Insert_to_square_matrix(std::vector<std::vector<double>> &matrix);

    /**
     * Funkcja mnoży dwie macierze kwadratowe.
     * @param matrix_a - Pierwsza macierz kwadratowa.
     * @param matrix_b - Druga macierz kwadratowa.
     * @return Macierz wynikowa.
     */
    std::vector<std::vector<double>> Multiply_square_matrices(const std::vector<std::vector<double>> &matrix_a,
                                                              const std::vector<std::vector<double>> &matrix_b);

    /**
     * Funkcja oblicza transpozycję macierzy kwadratowej.
     * @param matrix - Macierz kwadratowa.
     * @return Transpozycja macierzy kwadratowej.
     */
    std::vector<std::vector<double>> Square_matrix_transposition(const std::vector<std::vector<double>> &matrix);

    /**
     * Funkcja oblicza wyznacznik macierzy kwadratowej przy użyciu metody rozwinięcia Laplace'a.
     * @param matrix - Macierz kwadratowa.
     * @return Wyznacznik macierzy kwadratowej.
     */
    double Determinant_of_square_matrix(const std::vector<std::vector<double>> &matrix);
}
