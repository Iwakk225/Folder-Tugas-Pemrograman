#include <stdio.h>

int main(void) {

    int n, i, nilai;
    int jumlah = 0;
    int dihitung = 0;

    printf("Masukkan jumlah data = ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Jumlah data harus lebih dari 0\n");
    } else {

        for (i = 1; i <= n; i++) {
            printf("Masukkan nilai ke-%d = ", i);
            scanf("%d", &nilai);

            if (nilai < 0 || nilai > 100) {
                printf("Nilai %d dilewati (di luar rentang 0-100)\n", nilai);
                continue;
            }

            jumlah = jumlah + nilai;
            dihitung = dihitung + 1;
        }

        if (dihitung > 0) {
            printf("Data valid  = %d\n", dihitung);
            printf("Jumlah      = %d\n", jumlah);
            printf("Rata-rata   = %.2f\n", (float) jumlah / dihitung);
        } else {
            printf("Tidak ada data valid\n");
        }
    }

    return 0;
}
