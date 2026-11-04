#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char cek[52] = {'a','b','c','d','e','f','g','h','i','j','k','l','m',
                    'n','o','p','q','r','s','t','u','v','w','x','y','z',
                    'A','B','C','D','E','F','G','H','I','J','K','L','M',
                    'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int jmlh[52] = {0};
    char s[300];
    int i, j;

    printf("Masukkan kalimat:\n");
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';

    for (i = 0; s[i]; i++)
        for (j = 0; j < 52; j++)
            if (s[i] == cek[j]) { jmlh[j]++; break; }

    printf("Jumlah huruf=%d\n", (int)strlen(s));   
    for (j = 0; j < 26; j++)                        
        printf("%c = %d%s", cek[j], jmlh[j] + jmlh[j + 26], j < 25 ? ", " : "\n");
    return 0;
}