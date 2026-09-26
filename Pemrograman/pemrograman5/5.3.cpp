#include <stdio.h>
#include <math.h>

int main() {
    int pilihan, n;

    printf("Pilih pola deret:\n");
    printf("1. 2, 4, 8, 16, 32, ... (2^n)\n");
    printf("2. 1, 4, 9, 16, 25, ... (n^2)\n");
    printf("3. 1, 8, 27, 64, 125, ... (n^3)\n");
    printf("Masukkan pilihan (1/2/3): ");
    scanf("%d", &pilihan);

    printf("Masukkan jumlah suku = ");
    scanf("%d", &n);

    printf("\nHasil deret:\n");

    for (int i = 1; i <= n; i++) {
        int suku;

        if (pilihan == 1) {
            suku = (int) pow(2, i);
        } else if (pilihan == 2) {
            suku = (int) pow(i, 2);
        } else if (pilihan == 3) {
            suku = (int) pow(i, 3);
        } else {
            printf("Pilihan tidak valid!\n");
            return 0;
        }

        printf("%d", suku);
        if (i < n) {
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}
