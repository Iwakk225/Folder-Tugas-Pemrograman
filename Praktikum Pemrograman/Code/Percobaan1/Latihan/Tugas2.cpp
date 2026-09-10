#include <stdio.h>

int main() {
    int a = 25, b = 7;

    printf("Penjumlahan = %d\n", a + b);
    printf("Pengurangan = %d\n", a - b);
    printf("Perkalian   = %d\n", a * b);
    printf("Pembagian   = %.2f\n", (float)a / b);
    printf("Sisa        = %d\n", a % b);

    return 0;
}
