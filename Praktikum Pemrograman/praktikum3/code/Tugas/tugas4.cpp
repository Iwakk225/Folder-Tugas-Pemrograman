#include <stdio.h> 

int main(void) {
	
	int nilai;
	
	printf("Masukkan Nilai Anda = ");
	scanf("%d", &nilai);
	
	if(nilai >= 85) {
		printf("Grade A");
	} else if (nilai >= 75) {
		printf("Grade B");
	} else if (nilai >= 65) {
		printf("Grade C");
	} else if (nilai >= 50) {
		printf("Grade D");
	} else {
		printf("Grade E");
	}
	
	return 0;
	
}
