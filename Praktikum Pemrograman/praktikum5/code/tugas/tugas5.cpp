#include <stdio.h>

int main (void) {

	int n, i, nilai, jumlah;
	float rata2;

	printf("Masukkan jumlah data = ");
	scanf("%d", &n);

	if (n <= 0){
		printf("Jumlah data tidak boleh 0\n");
	} else {

		jumlah = 0;

		for (i = 1; i <= n; i++) {
			printf("Masukkan nilai ke-%d = ", i);
			scanf("%d", &nilai);
			jumlah = jumlah + nilai;
		}

		rata2 = (float) jumlah / n;

		printf("Jumlah nilai = %d\n", jumlah);
		printf("Rata - rata nilai = %.2f\n", rata2);
	}

	return 0;
}
