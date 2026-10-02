#include <stdio.h>

int main(void) {

    int i, j, n = 5;

    printf("Segitiga kiri:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    printf("\nSegitiga terbalik:\n");
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    printf("\nPersegi:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}
