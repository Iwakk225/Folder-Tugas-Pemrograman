#include <stdio.h>

int main(void) {

    const char digit[] = "0123456789ABCDEF";
    unsigned long long bilangan;
    int basis, sisa[64], n = 0;
    printf("Bilangan desimal nonnegatif: ");
    if (scanf("%llu", &bilangan) != 1) return 1;
    printf("Basis tujuan (2-16): ");
    if (scanf("%d", &basis) != 1 || basis < 2 || basis > 16) {
        printf("Basis tidak valid.\n");
        return 1;
    }
    do {
        sisa[n++] = (int)(bilangan % (unsigned)basis);
        bilangan /= (unsigned)basis;
    } while (bilangan > 0 && n < 64);
    printf("Hasil konversi: ");
    while (n > 0) printf("%c", digit[sisa[--n]]);
    printf("\n");
    
    return 0;
}