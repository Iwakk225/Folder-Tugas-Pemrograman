#include <stdio.h>

int main(void) {

    int n, i, nilai;
    int min, maks, jumlah;
    float rata;

    printf("Masukkan jumlah data = ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Jumlah data harus lebih dari 0\n");
    } else {

        printf("Masukkan nilai ke-1 = ");
        scanf("%d", &nilai);
        min = nilai;
        maks = nilai;
        jumlah = nilai;

        for (i = 2; i <= n; i++) {
            printf("Masukkan nilai ke-%d = ", i);
            scanf("%d", &nilai);

            jumlah = jumlah + nilai;

            if (nilai < min)
                min = nilai;

            if (nilai > maks)
                maks = nilai;
        }

        rata = (float) jumlah / n;

        printf("Nilai minimum = %d\n", min);
        printf("Nilai maksimum = %d\n", maks);
        printf("Rata-rata = %.2f\n", rata);
    }

    return 0;
}
