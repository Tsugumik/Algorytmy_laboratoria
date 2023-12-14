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

    bool Is_number_perfect(int n) {
        int sum = 1;

        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }

        if (sum == n) {
            return true;
        } else {
            return false;
        }
    }

    bool Is_palindrome(const std::string &str) {
        for (int i = 0; i < str.length() / 2; i++) {
            if (str[i] != str[str.length() - 1 - i]) {
                return false;
            }
        }

        return true;
    }

    bool Is_pesel_valid(const std::string &pesel) {
        if (pesel.length() != 11) return false;

        int weights[] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1};
        int sum = 0;

        for (int i = 0; i < 11; i++) {
            int number = pesel[i] - '0';
            sum += number * weights[i];
        }

        if (sum % 10 == 0) {
            return true;
        } else {
            return false;
        }
    }

    double Calculate_ONP(const std::string &str) {
        Stack<double> stack;

        std::string symbol;

        for (int i = 0; i <= str.size(); i++) {
            if (str[i] == ' ' || i == str.size()) {
                if (!symbol.empty()) {
                    // Sprawdzanie czy symbol jest liczbą
                    try {
                        size_t pos;
                        double liczba = std::stod(symbol, &pos);
                        if (pos == symbol.size()) {
                            // Symbol jest liczbą, odłóż na stos
                            stack.push(liczba);
                        }
                    } catch (const std::exception &e) {
                        // Symbol potencjalnie nie jest liczbą, ponieważ przy próbie konwersji otrzymaliśmy wyjątek
                        if (symbol.size() == 1) {
                            if (stack.size() < 2) {
                                throw std::runtime_error("Zbyt malo elementow na stosie do wykonania operacji");
                            }
                            double a = stack.pop();
                            double b = stack.pop();
                            double wynik;

                            switch (symbol[0]) {
                                case '+':
                                    wynik = b + a;
                                    break;
                                case '-':
                                    wynik = b - a;
                                    break;
                                case '/':
                                    wynik = b / a;
                                    break;
                                case '*':
                                    wynik = b * a;
                                    break;
                                default:
                                    throw std::invalid_argument("Nieznany symbol operatora");
                            }

                            stack.push(wynik);

                        } else {
                            throw std::invalid_argument("Nieznany symbol");
                        }

                    }

                    symbol.clear();

                }
            } else {
                symbol += str[i];
            }
        }

        return stack.top();
    }
}

namespace Converters {
    std::string Dec_to_bin(int n) {
        std::string result;

        while (n > 0) {
            int rest = n % 2;
            result = std::to_string(rest) + result;
            n = n / 2;
        }

        return result;
    }

    int Bin_to_dec(const std::string &str) {
        int result = 0;
        int power = 1;

        for (int i = (int) str.length() - 1; i >= 0; i--) {
            if (str[i] == '1') {
                result += power;
            }
            power = power * 2;
        }

        return result;
    }

    std::string Dec_to_hex(int n) {
        std::string result;

        while (n > 0) {
            int rest = n % 16;
            char ch;

            if (rest < 10) {
                ch = (char) ('0' + rest);
            } else {
                ch = (char) ('A' + (rest - 10));
            }

            result = ch + result;
            n = n / 16;
        }

        return result;
    }

    int Hex_to_dec(const std::string &str) {
        int result = 0;
        int power = 1;

        for (int i = (int) str.length() - 1; i >= 0; i--) {
            char ch = (char) std::toupper(str[i]);
            int value = 0;

            if (std::isdigit(ch)) {
                value = ch - '0';
            } else if (ch >= 'A' && ch <= 'F') {
                value = 10 + (ch - 'A');
            }

            result += value * power;
            power = power * 16;
        }

        return result;
    }

}