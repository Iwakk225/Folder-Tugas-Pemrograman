#include <stdio.h>

int main(void) {
    int nilai;

    printf("Masukkan bilangan = ");
    scanf("%d", &nilai);

    if (nilai % 2 == 0) {
        printf("Bilangan genap\n");
    } else {
        printf("Bilangan ganjil\n");
    }

    return 0;
}
