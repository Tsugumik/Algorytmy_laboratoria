#include <iostream>
#include <vector>
#include "../zadania.h"
#include "../algorithms/Matrix_tools.h"

namespace zadania_25_10_2023 {
    void zad_2() {
        /*
         * Źródło zaczerpniętych informacji
         * Rozwinięcie Laplace’a - metoda na obliczenie wyznacznika - https://www.youtube.com/watch?v=P5LJrOn6E9s&t=343s
         *
         */
        using std::cout, std::cin, std::endl, std::vector;
        using namespace Matrix_tools;
        int n;

        cout << "Podaj wymiar macierzy kwadratowej:";
        cin >> n;

        vector<vector<double>> matrix_a(n, vector<double>(n));
        vector<vector<double>> matrix_b(n, vector<double>(n));

        cout << "== Wczytywanie macierzy nr 1 ==" << endl;
        Insert_to_square_matrix(matrix_a);
        cout << "== Wczytywanie macierzy nr 2 ==" << endl;
        Insert_to_square_matrix(matrix_b);

        cout << "== Macierz nr 1 ==" << endl;
        Print_square_matrix(matrix_a);
        cout << "== Macierz nr 2 ==" << endl;
        Print_square_matrix(matrix_b);

        cout << "== Wynik mnozenia macierzy nr 1 i macierzy nr 2 ==" << endl;

        Print_square_matrix(Multiply_square_matrices(matrix_a, matrix_b));

        cout << "== Wynik mnozenia macierzy nr 2 i macierzy nr 1 ==" << endl;

        Print_square_matrix(Multiply_square_matrices(matrix_b, matrix_a));

        cout << "== Transpozycja macierzy nr 1 ==" << endl;

        Print_square_matrix(Square_matrix_transposition(matrix_a));

        cout << "== Transpozycja macierzy nr 2 ==" << endl;

        Print_square_matrix(Square_matrix_transposition(matrix_b));

        cout << "== Wyznacznik macierzy nr 1 ==" << endl;

        cout << Determinant_of_square_matrix(matrix_a) << endl;

        cout << "== Wyznacznik macierzy nr 2 ==" << endl;

        cout << Determinant_of_square_matrix(matrix_b) << endl;

    }
}