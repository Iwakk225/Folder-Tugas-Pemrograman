#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[500];
    int i, kecil = 0, besar = 0, angka = 0, baca = 0;

    printf("Masukkan string: ");
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';

    for (i = 0; s[i]; i++) {
        unsigned char c = s[i];
        if (islower(c))      kecil++;
        else if (isupper(c)) besar++;
        else if (isdigit(c)) angka++;
        else if (ispunct(c)) baca++;
    }
    printf("Jumlah Huruf kecil   = %d\n", kecil);
    printf("Jumlah Huruf besar   = %d\n", besar);
    printf("Jumlah Angka Numerik = %d\n", angka);
    printf("Jumlah Tanda Baca    = %d\n", baca);
    printf("Total Karakter       = %d\n", kecil + besar + angka + baca);
    return 0;
}