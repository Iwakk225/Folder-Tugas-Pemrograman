#include <iostream>

int jumlahDigit(int n) {
    if (n < 0) return -1;            
    if (n < 10) return n;            
    return n % 10 + jumlahDigit(n / 10);
}

int jumlahDigitIteratif(int n) {
    if (n < 0) return -1;
    int jumlah = 0;
    while (n > 0) { jumlah += n % 10; n /= 10; }
    return jumlah;
}
int main() {
    int uji[] = {0, 7, 12345, 9999, 1000, -12};
    for (int n : uji)
        std::cout << n << " : rekursif=" << jumlahDigit(n)
                  << ", iteratif=" << jumlahDigitIteratif(n) << '\n';
    return 0;
}
