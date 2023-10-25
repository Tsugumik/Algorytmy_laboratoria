#include <iostream>
#include "Algorithms.h"

namespace Algorithms {
    int NWD(int a, int b) {
        while (b != 0) {
            int tmp = a % b;
            a = b;
            b = tmp;
        }
        return a;
    }

    int NWW(int a, int b) {
        int nwd = NWD(a, b);
        return (a * b) / nwd;
    }

    int Sum_of_digits(int n) {
        int sum = 0;

        while (n > 0) {
            sum = sum + n % 10;
            n = n / 10;
        }

        return sum;
    }

    bool Can_triangle_be_formed(double a, double b, double c) {
        if (a + b > c && a + c > b && b + c > a) {
            return true;
        } else {
            return false;
        }
    }

    bool Is_prime(int n) {
        if (n < 2) return false;
        if (n == 2) return true;
        // Liczby parzyste większe od 2 nie są pierwsze.
        if (n % 2 == 0) return false;

        /*
         * Zwiększam i o 2 ponieważ nie ma potrzeby sprawdzania
         * parzystych dzielników.
         */
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return false;
        }

        return true;
    }
}