#include <iostream>

unsigned long long faktorial(int n, bool &valid) {
    valid = true;
    if (n < 0 || n > 20) { valid = false; return 0; }
    unsigned long long hasil = 1;
    for (int i = 2; i <= n; ++i) hasil *= i;
    return hasil;
}
int main() {
    int uji[] = {0, 1, 5, 10, 20, 21, -3};
    for (int n : uji) {
        bool ok;
        unsigned long long f = faktorial(n, ok);
        if (ok) std::cout << n << "! = " << f << '\n';
        else    std::cout << n << "! : masukan tidak valid / melebihi batas (maks 20)\n";
    }
    return 0;
}
