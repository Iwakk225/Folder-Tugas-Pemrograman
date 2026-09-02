#include <stdio.h>

int main() {
    float x, y, z;

    printf("Masukkan nilai = ");
    scanf("%f", &x);

    y = x * x * x + x * x + 9 * x + 6;
    z = (2 * y + 5 * x * x) / (9 * x * x + 2);

    printf("Didapatkan nilai y = %.0f\n", y);
    printf("Didapatkan nilai z = %f\n", z);

    return 0;
}
