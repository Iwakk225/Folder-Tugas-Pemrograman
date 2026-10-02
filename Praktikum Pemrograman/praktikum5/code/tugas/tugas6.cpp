#include <stdio.h>

int main(void) {

	int angka, digit, asli, jumlah;

	printf("Masukkan angka = ");
	scanf("%d", &angka);

	if (angka < 0) {
		printf("Angka tidak boleh negatif\n");
	} else {
		asli = angka;
		jumlah = 0;

		while (angka > 0) {
			digit = angka % 10;
			jumlah = jumlah + digit;
			angka = angka / 10;
		}

		printf("Input dari user = %d\n", asli);
		printf("Jumlah = %d\n", jumlah);
	}

	return 0;
}
