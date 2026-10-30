#include <stdio.h>

#define MAX 46349

static int P[MAX + 1];   

int main()
{
    long int i, j;
    long int n;
    int cacah = 0;

    do {
        printf("Tampilkan bilangan prima antara 1 sampai n (n <= %d) : ", MAX);
        scanf("%ld", &n);
    } while (n < 2 || n > MAX);

    for (i = 2; i <= n; i++) {
        if (P[i] == 0)                              
            for (j = i * i; j <= n; j += i)         
                P[j] = 1;
    }

    printf("\nBilangan prima 1 sampai %ld :\n", n);
    for (i = 2; i <= n; i++) {
        if (P[i] == 0) {
            printf("%8ld", i);
            if (++cacah % 10 == 0)
                printf("\n");
        }
    }
    printf("\n\nJumlah bilangan prima = %d\n", cacah);

    return 0;
}