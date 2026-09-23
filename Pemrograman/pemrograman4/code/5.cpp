#include <stdio.h>
#define PI 3.14

int main() {

    int pilihan;

    float panjang, lebar, alas, tinggi, sisi;
    float keliling, luas, jari2;

    printf("\n===================================\n");
    printf("| Menu :                          |\n");
    printf("| 1. Persegi                      |\n");
    printf("| 2. Persegi Panjang              |\n");
    printf("| 3. Segitiga                     |\n");
    printf("| 4. Lingkaran                    |\n");
    printf("===================================\n");

    printf("Masukkan pilihan anda = ");
    scanf("%d", &pilihan);

    switch(pilihan) {

        case 1:
            printf("Masukkan panjang sisi = ");
            scanf("%f", &sisi);

            keliling = 4 * sisi;
            luas = sisi * sisi;

            printf("Keliling persegi = %.2f\n", keliling);
            printf("Luas persegi = %.2f\n", luas);
            break;

        case 2:
            printf("Masukkan panjang = ");
            scanf("%f", &panjang);

            printf("Masukkan lebar = ");
            scanf("%f", &lebar);

            keliling = 2 * (panjang + lebar);
            luas = panjang * lebar;

            printf("Keliling persegi panjang = %.2f\n", keliling);
            printf("Luas persegi panjang = %.2f\n", luas);
            break;

        case 3:
            printf("Masukkan panjang sisi = ");
            scanf("%f", &sisi);

            printf("Masukkan alas = ");
            scanf("%f", &alas);

            printf("Masukkan tinggi = ");
            scanf("%f", &tinggi);

            if (sisi > 0 && alas > 0 && tinggi > 0) {
                keliling = 3 * sisi;
                luas = 0.5 * alas * tinggi;

                printf("Keliling segitiga = %.2f\n", keliling);
                printf("Luas segitiga = %.2f\n", luas);
            }
            else if (sisi == 0 || alas == 0 || tinggi == 0) {
                printf("Nilai tidak boleh 0!\n");
            }
            else {
                printf("Nilai tidak boleh negatif!\n");
            }
            break;

        case 4:
            printf("Masukkan jari-jari = ");
            scanf("%f", &jari2);

            keliling = 2 * PI * jari2;
            luas = PI * jari2 * jari2;

            printf("Keliling lingkaran = %.2f\n", keliling);
            printf("Luas lingkaran = %.2f\n", luas);
            break;

        default:
            printf("Pilihan tidak tersedia\n");
            break;
    }

    return 0;
}
