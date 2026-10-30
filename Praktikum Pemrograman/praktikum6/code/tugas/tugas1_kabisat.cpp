#include <iostream>

bool kabisat(int tahun) {
    return (tahun % 400 == 0) || (tahun % 4 == 0 && tahun % 100 != 0);
}
int main() {
    int uji[] = {2000, 1900, 2024, 2023, 2100};
    for (int t : uji)
        std::cout << t << (kabisat(t) ? " : kabisat" : " : bukan kabisat") << '\n';
    return 0;
}