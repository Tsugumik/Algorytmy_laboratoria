/**
 * Funkcja oblicza NWD dla dwóch liczb całkowitych.
 * Wykorzystuje algorytm Euklidesa.
 *
 * Polega to na dzieleniu większej liczby przez mniejszą
 * i zastępowaniu większej liczby resztą z tego dzielenia.
 * Wszystko jest powtarzane do momentu, gdy druga liczba staje się zerem.
 * Na koniec pierwsza liczba zawiera NWD.
 *
 * @param a - Pierwsza liczba całkowita.
 * @param b - Druga liczba całkowita.
 * @return NWD liczb a i b.
 */
int NWD(int a, int b) {
    while(b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
