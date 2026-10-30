#include <iostream>

void fungsiOtomatis() {
    int hitung = 0;
    ++hitung;
    std::cout << "otomatis: " << hitung << '\n';
}

void fungsiStatic() {
    static int hitung = 0;
    ++hitung;
    std::cout << "static  : " << hitung << '\n';
}
int main() {
    std::cout << "--- fungsiOtomatis ---\n";
    for (int i = 0; i < 5; ++i) fungsiOtomatis();
    std::cout << "--- fungsiStatic ---\n";
    for (int i = 0; i < 5; ++i) fungsiStatic();
    return 0;
}
