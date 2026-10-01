#include <stdio.h>

int main() {
    int n, jumlah = 0;
    long long total = 0;  

    printf("Masukkan nilai maksimum = ");
    scanf("%d", &n);

    printf("\nOutput: ");

    for (int i = 2; i <= n; i++) {
        int prima = 1; 

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prima = 0;
                break;
            }
        }

        if (prima == 1) {
            printf("%d", i);
            jumlah++;
            total += i;
            if (i < n) printf(", ");
        }
    }

    printf("\n\nJumlah bilangan Prima = %d", jumlah);
    printf("\nJumlah seluruh bilangan Prima = %lld\n", total);  

    return 0;
}
