#include <stdio.h>

int main() {
	
	int bilangan;
	
	printf("Masukkan angka = ");
	scanf("%d", &bilangan);
	
	if(bilangan % 2 == 0) {
		printf("bilangan genap");
	} else {
		printf("bilangan ganjil");
	}
	
	return 0;
}
