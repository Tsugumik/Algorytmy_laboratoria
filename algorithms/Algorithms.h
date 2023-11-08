#pragma once

namespace Algorithms {
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
    int NWD(int a, int b);

    /**
     * Funkcja oblicza NWW dla dwóch liczb całkowitych.
     *
     * NWW jest obliczane na podstawie wzoru NWW(a, b) = (a * b) / NWD(a, b)
     *
     * @param a - Pierwsza liczba całkowita.
     * @param b - Druga liczba całkowita.
     * @return NWW liczb a i b.
     */
    int NWW(int a, int b);

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
    int Sum_of_digits(int n);

    /**
     * Funkcja sprawdza czy z boków o podanej długości można stworzyć trójkąt.
     * @param a - Bok trójkąta.
     * @param b - Bok trójkąta.
     * @param c - Bok trójkąta.
     * @return Wartość logiczna true jeśli można utworzyć trójkąt, w przeciwnym wypadku false.
     */
    bool Can_triangle_be_formed(double a, double b, double c);

    /**
     * Funkcja sprawdza czy liczba jest pierwsza.
     * @param n - Liczba całkowita.
     * @return Wartość logiczna true jeśli liczba jest pierwsza, w przeciwnym wypadku false.
     */
    bool Is_prime(int n);

    /**
     * Funkcja sprawdza czy liczba jest doskonała.
     * @param n - Liczba całkowita.
     * @return Wartość logiczna true jeśli liczba jest doskonała, w przeciwnym wypadku false.
     */
    bool Is_number_perfect(int n);

    /**
     * Funkcja sprawdza czy ciąg znaków jest palindromem.
     * @param str - Ciąg znaków.
     * @return Wartość logiczna true jeśli ciąg znaków jest palindromem, w przeciwnym wypadku false.
     */
    bool Is_palindrome(const std::string &str);

    /**
     * Funkcja sprawdza czy podany numer pesel jest poprawny.
     * @param pesel - Numer pesel.
     * @return Wartość logiczna true jeśli pesel jest poprawny, w przeciwnym wypadku false.
     */
    bool Is_pesel_valid(const std::string &pesel);
}

namespace Converters {
    /**
     * Funkcja konwertuje liczbę zapisaną w systemie dziesiętnym na system dwójkowy.
     * @param n - Liczba zapisana w systemie dziesiętnym.
     * @return Liczba zapisana w systemie dwójkowym.
     */
    std::string Dec_to_bin(int n);

    /**
     * Funkcja konwertuje liczbę zapisaną w systemie dwójkowym na system dziesiętny.
     * @param str - Liczba zapisana w systemie dwójkowym.
     * @return Liczba zapisana w systemie dziesiętnym.
     */
    int Bin_to_dec(const std::string &str);

    /**
     * Funkcja konwertuje liczbę zapisaną w systemie dziesiętnym na system szesnastkowy.
     * @param n - Liczba zapisana w systemie dziesiętnym.
     * @return Liczba zapisana w systemie szesnastkowym.
     */
    std::string Dec_to_hex(int n);

    /**
     * Funkcja konwertuje liczbę zapisaną w systemie szesnastkowym na system dziesiętny.
     * @param str - Liczba zapisana w systemie szesnastkowym.
     * @return Liczba zapisana w systemie dziesiętnym.
     */
    int Hex_to_dec(const std::string &str);
}