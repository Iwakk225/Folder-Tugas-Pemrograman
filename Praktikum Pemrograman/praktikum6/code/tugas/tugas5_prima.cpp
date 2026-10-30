#include <iostream>

bool prima(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}
int main() {
    int uji[] = {-5, 0, 1, 2, 3, 15, 17, 97, 100};
    for (int n : uji)
        std::cout << n << (prima(n) ? " : prima" : " : bukan prima") << '\n';
    return 0;
}
