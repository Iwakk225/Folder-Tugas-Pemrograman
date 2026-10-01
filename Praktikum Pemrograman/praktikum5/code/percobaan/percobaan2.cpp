#include <stdio.h>

int main(void) {

    int n, i, total;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n harus bilangan bulat positif.\n");
    } else {
        total = 0;

        for (i = 1; i <= n; i++) {
            total = total + i;
        }

        printf("Jumlah 1 sampai %d adalah %d\n", n, total);
    }

    return 0;
}
