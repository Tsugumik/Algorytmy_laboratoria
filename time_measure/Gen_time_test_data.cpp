#include "Gen_time_test_data.h"

void Gen_time_test_data(const std::string &path) {
    srand(time(nullptr));

    // Ustawienie strumienia pliku wyjściowego
    std::fstream file(path, std::fstream::out);

    // Generowanie zbioru posortowanego rosnąco
    file.open(path + "/ascending500.txt", std::fstream::out);

    for(int i = 1; i <= 500; i++) {
        file << i << '\n';
    }

    file.close();

    // Generowanie zbioru posortowanego malejąco
    file.open(path + "/descending500.txt", std::fstream::out);

    for(int i = 500; i >= 1; i--) {
        file << i << '\n';
    }

    file.close();

    // Generowanie zbioru z danymi losowymi

    file.open(path + "/random500.txt", std::fstream::out);

    for(int i = 0; i < 500; i++) {
        file << rand() % 500 << '\n';
    }

    file.close();
}
