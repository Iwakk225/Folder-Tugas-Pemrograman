#include <iostream>

bool validNR(int n, int r) { return n >= 0 && r >= 0 && r <= n; }


long long permutasi(int n, int r) {
    if (!validNR(n, r)) return -1;
    long long hasil = 1;
    for (int i = 0; i < r; ++i) hasil *= (n - i);
    return hasil;
}

long long kombinasi(int n, int r) {
    if (!validNR(n, r)) return -1;
    if (r > n - r) r = n - r;
    long long hasil = 1;
    for (int i = 1; i <= r; ++i) hasil = hasil * (n - r + i) / i;
    return hasil;
}

int main() {
    int uji[][2] = {{5,2},{10,3},{5,0},{5,5},{3,5},{-1,0}};
    for (auto &u : uji) {
        long long p = permutasi(u[0], u[1]), c = kombinasi(u[0], u[1]);
        std::cout << "n=" << u[0] << ", r=" << u[1] << " : ";
        if (p < 0) std::cout << "tidak valid (harus 0 <= r <= n)\n";
        else std::cout << "P=" << p << ", C=" << c << '\n';
    }
    return 0;
}
