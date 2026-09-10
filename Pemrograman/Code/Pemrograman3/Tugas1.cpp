#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Masukkan nilai a = ");
    scanf("%d", &a);

    printf("Masukkan nilai b = ");
    scanf("%d", &b);

    printf("Masukkan nilai c = ");
    scanf("%d", &c);

    printf("Masukkan nilai d = ");
    scanf("%d", &d);

    printf("a = %d\n", (a > b) && (c < d) || (a == b));
    printf("b = %d\n", (a == b) || (c == d) && (a < b));
    printf("c = %d\n", (a <= c) && (b >= d) || (a == d));
    printf("d = %d\n", (a >= d) || (b <= c) && (c == d));
    printf("e = %d\n", (a != b) || (c > d) || (a != d));

    return 0;
}
