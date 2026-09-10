#include <stdio.h>

int main() {
    int teori, praktik;
    int lulus;

    printf("Masukkan nilai teori = ");
    scanf("%d", &teori);

    printf("Masukkan nilai praktik = ");
    scanf("%d", &praktik);

    lulus = (teori >= 60) && (praktik >= 60);

    printf("\nNilai teori   = %d\n", teori);
    printf("Nilai praktik = %d\n", praktik);
    printf("Hasil         = %s\n", lulus ? "LULUS" : "TIDAK LULUS");

    return 0;
}
