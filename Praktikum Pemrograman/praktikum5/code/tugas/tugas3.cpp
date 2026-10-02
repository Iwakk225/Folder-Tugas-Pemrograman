#include <stdio.h>

int main(void) {

    int angka, asli, digit, balik = 0;

    printf("Masukkan bilangan bulat: ");
    scanf("%d", &angka);

    if (angka < 0) {
        printf("Masukkan bilangan tidak negatif.\n");
    } else {
        asli = angka;

        while (angka > 0) {
            digit = angka % 10;
            balik = balik * 10 + digit;
            angka = angka / 10;
        }

        printf("Input  : %d\n", asli);
        printf("Output : %d\n", balik);
    }

    return 0;
}
