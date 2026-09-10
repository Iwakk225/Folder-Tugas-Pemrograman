#include <stdio.h>

int main() {
    int x, y,a,b,c,d,maks;

	printf("Masukkan nilai A = ");
	scanf("%d", &a);
	
	printf("Masukkan nilai B = ");
	scanf("%d", &b);
	
	printf("Masukkan nilai C = ");
	scanf("%d", &c);
	
	printf("Masukkan nilai D = ");
	scanf("%d", &d);
	
	x = (a > b) ? a : b;
	y = (c > d) ? c : d;
	maks = (x > y) ? x : y;
	
	if (a > b)
    printf("Nilai A lebih besar dari B\n");
		else
    printf("Nilai B lebih besar dari A\n");

	if (c > d)
    printf("Nilai C lebih besar dari D\n");
		else
    printf("Nilai D lebih besar dari C\n");

	printf("Jadi nilai maksimum adalah %d\n", maks);

    return 0;
}
