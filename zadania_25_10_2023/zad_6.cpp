#include <iostream>
#include "../zadania.h"

namespace zadania_25_10_2023 {
    void zad_6() {
        using std::cout, std::cin, std::endl;
        /*
         * Źródło zaczerpniętych informacji
         * https://www.matemaks.pl/metoda-wyznacznikow.html
         * https://www.naukowiec.org/wiedza/matematyka/metoda-wyznacznikow_1320.html
         */

        // Współczynniki dla pierwszego równania
        double a1, b1, c1;
        cout << "Podaj wspolczynniki pierwszego rownania oddzielone spacja (a b c): ";
        cin >> a1 >> b1 >> c1;

        // Współczynniki dla drugiego równania
        double a2, b2, c2;
        cout << "Podaj wspolczynniki drugiego rownania oddzielone spacja (a b c): ";
        cin >> a2 >> b2 >> c2;



        // Obliczanie wyznacznika głównego
        double D = a1 * b2 - a2 * b1;

        // Obliczanie wyznacznika x
        double Dx = c1 * b2 - c2 * b1;

        // Obliczanie wyznacznika y
        double Dy = a1 * c2 - a2 * c1;

        /*
         * Jeśli wyznacznik główny jest równy 0, to układ równań
         * może być sprzeczny lub nieoznaczony
         */
        if (D == 0) {
            if (Dx == 0 && Dy == 0) {
                cout << "Uklad rownan jest nieoznaczony.";
            } else {
                cout << "Uklad rownan jest sprzeczny.";
            }
        } else {
            /*
             * Jeśli wyznacznik główny nie jest zerem
             * można obliczyć x oraz y
             */
            double x = Dx / D;
            double y = Dy / D;

            cout << "Uklad rownan jest oznaczony" << endl;
            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
        }
    }
}