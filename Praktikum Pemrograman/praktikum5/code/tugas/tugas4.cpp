#include <stdio.h>

int main(void) {

    float c, f, r, k;

    printf("Masukkan suhu Celsius: ");
    scanf("%f", &c);

    f = (c * 9.0 / 5.0) + 32;
    r = c * 4.0 / 5.0;
    k = c + 273.15;

    printf("=====================================\n");
    printf("| Celsius    -> Fahrenheit = %8.2f |\n", f);
    printf("| Celsius    -> Reamur     = %8.2f |\n", r);
    printf("| Celsius    -> Kelvin     = %8.2f |\n", k);
    printf("=====================================\n");

    return 0;
}
