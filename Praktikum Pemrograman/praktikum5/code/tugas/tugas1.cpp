#include <stdio.h>

int main(void) {

    int n, i, j;

    printf("Masukkan ukuran matriks (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n harus bilangan bulat positif.\n");
    } else {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (i == j)
                    printf("1 ");
                else
                    printf("0 ");
            }
            printf("\n");
        }
    }

    return 0;
}
