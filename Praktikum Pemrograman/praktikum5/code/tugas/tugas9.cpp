#include <stdio.h>

int main(void) {

    int n, i, target, nilai;
    int ditemukan = 0;
    int posisi = 0;

    printf("Masukkan jumlah data = ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Jumlah data harus lebih dari 0\n");
    } else {

        printf("Masukkan nilai target = ");
        scanf("%d", &target);

        for (i = 1; i <= n; i++) {
            printf("Masukkan nilai ke-%d = ", i);
            scanf("%d", &nilai);

            if (nilai == target) {
                ditemukan = 1;
                posisi = i;
                break;
            }
        }

        if (ditemukan == 1)
            printf("Target %d ditemukan pada data ke-%d\n", target, posisi);
        else
            printf("Target %d tidak ditemukan\n", target);
    }

    return 0;
}
