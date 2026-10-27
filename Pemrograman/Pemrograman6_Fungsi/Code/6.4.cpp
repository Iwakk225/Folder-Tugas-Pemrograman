#include <stdio.h>
#include <time.h>


int prima(int n)
{
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;  
    }
    return 1;
}

int main(void)
{
    int n;
    long i;                       
    register long r;             
    unsigned long long total1 = 0, total2 = 0;
    clock_t mulai, selesai;
    const long BATAS = 300000000L;

    printf("Masukkan bilangan : ");
    scanf("%d", &n);
    if (prima(n))
        printf("%d adalah bilangan prima\n", n);
    else
        printf("%d bukan bilangan prima\n", n);


    mulai = clock();
    for (i = 0; i < BATAS; i++)
        total1 += i;
    selesai = clock();
    printf("\nLoop integer  : %.3f detik (total=%llu)\n",
           (double)(selesai - mulai) / CLOCKS_PER_SEC, total1);


    mulai = clock();
    for (r = 0; r < BATAS; r++)
        total2 += r;
    selesai = clock();
    printf("Loop register : %.3f detik (total=%llu)\n",
           (double)(selesai - mulai) / CLOCKS_PER_SEC, total2);

    return 0;
    
}
