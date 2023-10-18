/**
 * Funkcja oblicza sumę cyfr liczby całkowitej.
 *
 * Algorytm dodaje do sumy cyfę jedności z podanej liczby
 * a następnie dzieli liczbę przez 10 usuwając z niej ostatnią cyfrę.
 *
 * Procedura jest powtarzana do momentu, kiedy liczba stanie się zerem,
 * co wskazuje na to, że wszystkie cyfry zostały zsumowane.
 *
 * @param n - Liczba całkowita, dla której obliczana jest suma cyfr.
 * @return Suma cyfr liczby.
 */
int Sum_of_digits(int n) {
    int sum = 0;

    while(n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}