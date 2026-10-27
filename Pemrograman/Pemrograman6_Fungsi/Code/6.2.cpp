#include <stdio.h>

long long factorial(int n)
{
    long long hasil = 1;
    int i;

    for (i = 2; i <= n; i++)
        hasil = hasil * i;

    return hasil;
}

/* P(n,r) = n! / (n-r)! */
long long permutasi(int n, int r)
{
    return factorial(n) / factorial(n - r);
}

/* C(n,r) = n! / (r! * (n-r)!) */
long long kombinasi(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main(void)
{
    int n, r;

    printf("Masukkan n (0-20) : ");
    scanf("%d", &n);
    printf("Masukkan r        : ");
    scanf("%d", &r);

    if (n < 0 || n > 20 || r < 0 || r > n) {
        printf("Input tidak valid: harus 0 <= r <= n <= 20\n");
        return 1;
    }

    printf("\nP(%d,%d) = %lld\n", n, r, permutasi(n, r));
    printf("C(%d,%d) = %lld\n", n, r, kombinasi(n, r));

    return 0;
}
