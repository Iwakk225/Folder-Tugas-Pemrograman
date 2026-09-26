#include <stdio.h>
#include <math.h>

int main() {
    int baris, kolom;

    printf("Masukkan jumlah baris = ");
    scanf("%d", &baris);

    printf("Masukkan jumlah kolom = ");
    scanf("%d", &kolom);

    printf("\n");

    for (int i = 1; i <= baris; i++) {
        for (int j = 1; j <= kolom; j++) {
            int hasil = (int) pow(j, i);
            printf("%-6d", hasil);
        }
        printf("\n");
    }

    return 0;
}
