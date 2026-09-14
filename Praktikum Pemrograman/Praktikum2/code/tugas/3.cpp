#include <stdio.h>

int main(void) {
    double r = 7;
    double t = 10;
    double pi = 3.14159;
    double volume, luas;

    volume = pi * r * r * t;
    luas = 2 * pi * r * (r + t);

    printf("Jari-jari       = %.2f\n", r);
    printf("Tinggi          = %.2f\n", t);
    printf("Volume          = %.2f\n", volume);
    printf("Luas permukaan  = %.2f\n", luas);

    return 0;
}
