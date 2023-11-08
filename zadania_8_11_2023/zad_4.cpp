#include <iostream>
#include "../zadania.h"

namespace zadania_8_11_2023 {
    void zad_4() {
        using std::cout, std::cin, std::endl;
        double weight_sum = 0;
        double numbers_sum = 0;
        int n;

        cout << "Ile liczb chcesz wprowadzic:";
        cin >> n;

        for (int i = 1; i <= n; i++) {
            double temp_num, temp_weight;

            cout << "Wprowadz wartosc liczby nr " << i << ":";
            cin >> temp_num;

            cout << "Wprowadz wage liczby nr " << i << ":";
            cin >> temp_weight;

            numbers_sum += temp_num * temp_weight;
            weight_sum += temp_weight;
        }

        double weighted_avg = numbers_sum / weight_sum;

        cout << "Srednia wazona tych liczb to: " << weighted_avg << endl;
    }
}