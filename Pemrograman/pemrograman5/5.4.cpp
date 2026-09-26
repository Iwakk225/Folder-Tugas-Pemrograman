#include <stdio.h>

int main()
{
    int bil, sisa, hasil;

    printf("masukkan bilangan = ");
    scanf("%d", &bil);

    do {
        sisa = bil % 2;
        hasil = bil / 2;
        bil = hasil;
        printf("hasil=%d sisa=%d\n\n", bil, sisa);
    } while (hasil > 0);

}
