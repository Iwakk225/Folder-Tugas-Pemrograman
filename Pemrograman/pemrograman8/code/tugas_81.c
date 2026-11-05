#include <stdio.h>
#include <string.h>

void strsisip(char *s, const char *sisip, int pos)
{
    int n = strlen(s), m = strlen(sisip);
    if (pos < 0) pos = 0;
    if (pos > n) pos = n;
    memmove(s + pos + m, s + pos, n - pos + 1);  
    memcpy(s + pos, sisip, m);                   
}

int main()
{
    char teks[100] = "salah orang";
    strsisip(teks, "se", 6);
    printf("%s\n", teks);   
    return 0;
}