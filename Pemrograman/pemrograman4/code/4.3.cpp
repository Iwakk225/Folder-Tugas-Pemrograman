#include <stdio.h>

int main() {

    int tahun;

    printf("Masukkan tahun = ");
    scanf("%d", &tahun);

    if (tahun < 1900 || tahun > 2400) {
        printf("Tahun harus berada di antara 1900-2400");
    }
    else if (tahun % 400 == 0 ||
             (tahun % 4 == 0 && tahun % 100 != 0)) {
        printf("Tahun kabisat");
    }
    else {
        printf("Bukan tahun kabisat");
    }

    return 0;
} 
