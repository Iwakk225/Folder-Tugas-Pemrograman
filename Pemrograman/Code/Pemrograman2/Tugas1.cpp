#include <stdio.h>

int main() {
    float F, C;

    printf("Masukkan derajat Fahrenheit = ");
    scanf("%f", &F);

    C = (F - 32) * 5 / 9;

    printf("%.0f derajat Fahrenheit adalah = %.0f derajat Celcius\n", F, C);

    return 0;
}
