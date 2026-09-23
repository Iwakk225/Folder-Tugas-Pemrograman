#include <stdio.h> 

int main() {
	
	char username[50];
	int password;
	
	printf("Masukkan username = ");
	scanf("%49s", username);
	printf("Masukkan Password = ");
	scanf("%d", &password);
	
	if(username == username && password == 123) {
		printf("Login berhasil!");
	} else {
		printf("Login gagal. Cek username dan password anda lagi");
	}
	
	return 0;

}
