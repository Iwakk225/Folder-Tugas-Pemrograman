#include <stdio.h>


int kabisat(int tahun)
{
    if ((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0)
        return 1;
    else
        return 0;
}


long int factorial(int n)
{
    long int hasil = 1;
    int i;

    for (i = 2; i <= n; i++)
        hasil = hasil * i;

    return hasil;
}

int main(void)
{
    int tahun, n;

    printf("Masukkan tahun : ");
    scanf("%d", &tahun);

    if (kabisat(tahun))
        printf("%d adalah tahun kabisat\n", tahun);
    else
        printf("%d bukan tahun kabisat\n", tahun);

    printf("\nMasukkan n untuk faktorial (0-12) : ");
    scanf("%d", &n);

    if (n < 0 || n > 12) {
        printf("n harus antara 0 sampai 12 (batas aman long int 32 bit)\n");
    } else {
        printf("%d! = %ld\n", n, factorial(n));
    }

    return 0;
}
