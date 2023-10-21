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
}