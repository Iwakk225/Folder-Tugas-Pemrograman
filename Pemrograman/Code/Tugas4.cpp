#include <stdio.h>

int main() {
    int jam, menit, total;

    printf("Masukkan jam dan menit (jj:mm) = ");
    scanf("%d:%d", &jam, &menit);

    total = jam * 60 + menit;

    printf("Jam %02d:%02d adalah setara dengan %d menit\n",
           jam, menit, total);

    return 0;
}
