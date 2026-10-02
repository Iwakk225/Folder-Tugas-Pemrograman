#include <stdio.h>

int main(void) {

    int nilai, jumlah = 0, banyak = 0;

    printf("Masukkan nilai (-1 untuk selesai)\n");
    scanf("%d", &nilai);

    while (nilai != -1) {
        jumlah += nilai;
        banyak++;
        scanf("%d", &nilai);
    }

    if (banyak > 0)
        printf("Rata-rata = %.2f\n", (float) jumlah / banyak);
    else
        printf("Tidak ada data\n");

    return 0;
}
