#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char k[200], b[200];
    int i, j = 0, n, palindrom = 1;

    printf("Kalimat : ");
    fgets(k, sizeof k, stdin);
    k[strcspn(k, "\n")] = '\0';

    for (i = 0; k[i]; i++)
        if (isalnum((unsigned char)k[i]))
            b[j++] = tolower((unsigned char)k[i]);
    b[j] = '\0';
    n = j;

    for (i = 0; i < n / 2; i++)
        if (b[i] != b[n - 1 - i]) { palindrom = 0; break; }

    puts(palindrom ? "Termasuk PALINDROM" : "Bukan PALINDROM");
    return 0;
}