#include "Algorithms.h"

int NWW(int a, int b) {
    int nwd = NWD(a, b);
    return (a * b) / nwd;
}