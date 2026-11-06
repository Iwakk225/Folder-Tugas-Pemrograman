#include <stdio.h>
#define MAKS 10000

int main(void) {
    int prima[MAKS + 1];
    int n;
    printf("Batas n (2-%d): ", MAKS);
    if (scanf("%d", &n) != 1 || n < 2 || n > MAKS) {
        printf("Input tidak valid.\n");
        return 1;
    }
    for (int i = 0; i <= n; i++) prima[i] = 1;
    prima[0] = 0;
    prima[1] = 0;
    for (int i = 2; i * i <= n; i++) {
        if (prima[i]) {
            for (int j = i * i; j <= n; j += i)
                prima[j] = 0;
        }
    }
    printf("Bilangan prima 2 sampai %d:\n", n);
    for (int i = 2; i <= n; i++)
        if (prima[i]) printf("%d ", i);
    printf("\n");
    return 0;
}