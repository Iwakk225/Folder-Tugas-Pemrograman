#include <stdio.h>

int main() {
    float x, y, z;

    printf("Masukkan nilai = ");
    scanf("%f", &x);

    y = 3 * x * x + 6 * x + 9;
    z = (2 * y * y + 5 * x * x) / (9 * y);

    printf("Didapatkan nilai y = %.0f\n", y);
    printf("Didapatkan nilai z = %.7f\n", z);

    return 0;
}
