#include <stdio.h>

int main(void) {
    int sisi = 10;
    int luas, volume;

    luas = 6 * sisi * sisi;
    volume = sisi * sisi * sisi;

    printf("Sisi   = %d\n", sisi);
    printf("Luas   = %d\n", luas);
    printf("Volume = %d\n", volume);

    return 0;
}
