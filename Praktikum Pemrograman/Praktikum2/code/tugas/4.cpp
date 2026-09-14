#include <stdio.h>

int main(void) {
    double s = 150;
    double t = 2.5;
    double v;

    v = s / t;

    printf("Jarak     = %.2f km\n", s);
    printf("Waktu     = %.2f jam\n", t);
    printf("Kecepatan = %.2f km/jam\n", v);

    return 0;
}
