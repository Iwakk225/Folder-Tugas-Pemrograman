#include <stdio.h>
#include <math.h>

int main() {
    double n, x, x_baru;
    int iterasi = 0;

    printf("Masukkan bilangan = ");
    scanf("%lf", &n);

    x = n / 2;  

    printf("\nProses iterasi:\n");

    do {
        x_baru = (x + n / x) / 2;
        iterasi++;
        printf("Iterasi %d: Akar = (%.2f+%.0f/%.2f)/2 = %.4f\n",
               iterasi, x, n, x, x_baru);

        if (fabs(x_baru - x) < 0.0001) {  
            x = x_baru;
            break;
        }

        x = x_baru;

    } while (1);

    printf("\nHasil akar kuadrat dari %.0f = %.4f\n", n, x);

    return 0;
}
