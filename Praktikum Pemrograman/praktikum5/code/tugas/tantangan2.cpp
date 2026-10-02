#include <stdio.h>

int main(void) {

    int pilihan;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Halo\n");
        printf("2. Angka 1-5\n");
        printf("0. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan == 1)
            printf("Halo!\n");
        else if (pilihan == 2)
            printf("1 2 3 4 5\n");
        else if (pilihan != 0)
            printf("Pilihan tidak tersedia.\n");

    } while (pilihan != 0);

    return 0;
}
