#include "Algorithms.h"

/**
 * Funkcja oblicza NWW dla dwóch liczb całkowitych.
 *
 * NWW jest obliczane na podstawie wzoru NWW(a, b) = (a * b) / NWD(a, b)
 *
 * @param a - Pierwsza liczba całkowita.
 * @param b - Druga liczba całkowita.
 * @return NWW liczb a i b.
 */
int NWW(int a, int b) {
    int nwd = NWD(a, b);
    return (a * b) / nwd;
}