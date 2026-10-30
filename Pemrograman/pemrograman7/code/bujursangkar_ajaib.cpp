#include <stdio.h>

int main()
{
    int ajaib[19][19] = {{0}};
    int ordo, tengah, baris, kolom, angka, b, k;
    int nb, nk, total, sama = 1, jml;

    do {
        printf("Ordo (ganjil, 3 s/d 19) = ");
        scanf("%d", &ordo);
    } while (!(ordo >= 3 && ordo <= 19) || ordo % 2 == 0);

    tengah = ordo / 2;
    baris = 0;
    kolom = tengah;

    for (angka = 1; angka <= ordo * ordo; angka++) {
        ajaib[baris][kolom] = angka;

        nb = baris - 1;
        nk = kolom + 1;
        if (nb < 0)     nb = ordo - 1;
        if (nk == ordo) nk = 0;

        if (ajaib[nb][nk] != 0) {      
            nb = baris + 1;
            nk = kolom;
        }
        baris = nb;
        kolom = nk;
    }

    printf("\nBujursangkar ajaib ordo %d x %d:\n\n", ordo, ordo);
    for (b = 0; b < ordo; b++) {
        for (k = 0; k < ordo; k++)
            printf("%5d", ajaib[b][k]);
        printf("\n");
    }

    jml = ordo * (ordo * ordo + 1) / 2;
    for (b = 0; b < ordo; b++) {
        total = 0;
        for (k = 0; k < ordo; k++) total += ajaib[b][k];
        if (total != jml) sama = 0;
    }
    for (k = 0; k < ordo; k++) {
        total = 0;
        for (b = 0; b < ordo; b++) total += ajaib[b][k];
        if (total != jml) sama = 0;
    }
    printf("\nJumlah tiap baris/kolom = %d (%s)\n", jml, sama ? "terverifikasi" : "tidak sama");

    return 0;
}