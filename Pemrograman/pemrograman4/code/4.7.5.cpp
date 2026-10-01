#include <stdio.h>

int main() {

    int nilai;

    printf("Masukkan nilai = ");
    scanf("%d", &nilai);

    if (nilai < 0 || nilai > 100) {
        printf("Nilai harus berada di antara 0-100");
    } else if (nilai >= 80) {
        printf("Kategori A");
    } else if (nilai >= 70) {
        printf("Kategori B");
    } else if (nilai >= 60) {
        printf("Kategori C");
    } else if (nilai >= 50) {
        printf("Kategori D");
    } else {
        printf("Kategori E");
    }

    return 0;
}
