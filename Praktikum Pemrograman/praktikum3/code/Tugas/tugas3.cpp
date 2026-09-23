#include <stdio.h>

int main(void) {
    int a, b;

    printf("Masukkan nilai a = ");
    scanf("%d", &a);

    printf("Masukkan nilai b = ");
    scanf("%d", &b);

    if (a > b) {
        printf("Nilai terbesar = %d\n", a);
    } else if (b > a) {
        printf("Nilai terbesar = %d\n", b);
    } else {
        printf("Kedua bilangan sama\n");
    }

    return 0;
}
