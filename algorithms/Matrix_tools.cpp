#include <iostream>
#include <vector>
#include "Matrix_tools.h"

namespace Matrix_tools {
    void Print_square_matrix(const std::vector<std::vector<double>> &matrix) {
        using std::cout, std::endl;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.size(); j++) {
                cout << matrix[i][j] << '\t';
            }
            cout << endl;
        }
    }

    std::vector<std::vector<double>> Multiply_square_matrices(const std::vector<std::vector<double>> &matrix_a,
                                                              const std::vector<std::vector<double>> &matrix_b) {
        std::vector<std::vector<double>> result(matrix_a.size(), std::vector<double>(matrix_a.size(), 0));

        for (int i = 0; i < matrix_a.size(); i++) {
            for (int j = 0; j < matrix_a.size(); j++) {
                for (int k = 0; k < matrix_a.size(); k++) {
                    result[i][j] += matrix_a[i][k] * matrix_b[k][j];
                }
            }
        }

        return result;
    }

    void Insert_to_square_matrix(std::vector<std::vector<double>> &matrix) {
        using std::cout, std::cin, std::endl;
        cout << "Wprowadz wiersze macierzy, poszczegolne liczby oddzielaj spacjami." << endl;
        cout << "Na koniec kazdego wiersza wcisnij enter." << endl;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.size(); j++) {
                cin >> matrix[i][j];
            }
        }
    }

    std::vector<std::vector<double>> Square_matrix_transposition(const std::vector<std::vector<double>> &matrix) {
        std::vector<std::vector<double>> result(matrix.size(), std::vector<double>(matrix.size(), 0));

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.size(); j++) {
                result[i][j] = matrix[j][i];
            }
        }

        return result;
    }

    double Determinant_of_square_matrix(const std::vector<std::vector<double>> &matrix) {
        double determinant = 0;

        if (matrix.size() == 1) {
            return matrix[0][0];
        }

        if (matrix.size() == 2) {
            return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
        }

        for (int j = 0; j < matrix.size(); j++) {
            // Tworzenie podmacierzy bez pierwszego wiersza i kolumny j
            std::vector<std::vector<double>> sub_matrix(matrix.size() - 1, std::vector<double>(matrix.size() - 1));
            for (int i = 1; i < matrix.size(); i++) {
                for (int k = 0; k < j; k++) {
                    sub_matrix[i - 1][k] = matrix[i][k];
                }
                for (int k = j + 1; k < matrix.size(); k++) {
                    sub_matrix[i - 1][k - 1] = matrix[i][k];
                }
            }

            /*
             * Obliczam kofaktor i dodaje go lub odejmuje,
             * zależnie od tego czy aktualny indeks kolumny jest parzysty czy nie
             */
            double coffactor = matrix[0][j] * Determinant_of_square_matrix(sub_matrix);
            determinant += (j % 2 == 0) ? coffactor : -coffactor;
        }

        return determinant;
    }
}