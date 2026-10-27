#include <stdio.h>
#include <ctype.h>


float suhu(float t, char s, char d)
{
    float celsius;


    if (s == 'C')
        celsius = t;
    else if (s == 'F')
        celsius = (t - 32) * 5.0 / 9.0;
    else  
        celsius = t * 5.0 / 4.0;


    if (d == 'C')
        return celsius;
    else if (d == 'F')
        return celsius * 9.0 / 5.0 + 32;
    else  
        return celsius * 4.0 / 5.0;
}

int main(void)
{
    float t;
    char s, d, lagi;

    do {
        printf("Masukkan suhu sumber (contoh: 100 C) = ");
        scanf("%f %c", &t, &s);
        printf("Masukkan suhu tujuan (C/F/R)         = ");
        scanf(" %c", &d);

        s = toupper(s);
        d = toupper(d);

        if ((s != 'C' && s != 'F' && s != 'R') ||
            (d != 'C' && d != 'F' && d != 'R')) {
            printf("Satuan harus C, F, atau R!\n");
        } else {
            printf("Hasil konversi suhu                  = %g %c\n", suhu(t, s, d), d);
        }

        printf("\nCoba lagi? (y/n) ");
        scanf(" %c", &lagi);
        printf("\n");
    } while (lagi == 'y' || lagi == 'Y');

    return 0;
}
