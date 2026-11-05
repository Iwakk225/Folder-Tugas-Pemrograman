#include <stdio.h>
#include <string.h>

int main()
{
    const char *teks = "POLITEKNIK ELEKTRONIKA NEGERI SURABAYA";
    int n = strlen(teks), i;

    for (i = 1; i <= n; i++) {
        printf("%*s%.*s\n", (n - i) / 2, "", i, teks);
    }
    return 0;
}