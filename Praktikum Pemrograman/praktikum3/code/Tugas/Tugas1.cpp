#include <stdio.h>

int main(void) {
    int nilai;

    printf("Masukkan bilangan = ");
    scanf("%d", &nilai);

    if (nilai > 0) {
        printf("Bilangan positif\n");
    } else if (nilai < 0) {
        printf("Bilangan negatif\n");
    } else {
        printf("Bilangan nol\n");
    }

    return 0;
}
