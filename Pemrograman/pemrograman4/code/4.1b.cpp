#include <stdio.h>

int main() {
    
    char karakter;
    
    printf("Masukkan karakter = ");
    scanf(" %c", &karakter);
    
    if (karakter >= 'a' && karakter <= 'z') {
        printf("Huruf kecil");
    } else if (karakter >= 'A' && karakter <= 'Z') {
        printf("Huruf besar");
    } else if (karakter >= '0' && karakter <= '9') {
        printf("Angka");
    } else {
        printf("Karakter khusus");
    }
    
    return 0;
}
