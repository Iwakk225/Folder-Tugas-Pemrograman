#include <iostream>

int hitungDigit(int n) {
    if (n < 0) n = -n;
    int banyak = 1;
    while (n >= 10) { n /= 10; ++banyak; }
    return banyak;
}

int balikDigit(int n) {
    int balik = 0;
    while (n > 0) { balik = balik * 10 + n % 10; n /= 10; }
    return balik;
}

bool palindrom(int n) {
    return n >= 0 && n == balikDigit(n);
}
int main() {
    int uji[] = {0, 7, 121, 1221, 123, 1000, 1111, -121};
    for (int n : uji)
        std::cout << n << " : digit=" << hitungDigit(n) << ", balik=" << balikDigit(n)
                  << ", " << (palindrom(n) ? "palindrom" : "bukan palindrom") << '\n';
    return 0;
}
