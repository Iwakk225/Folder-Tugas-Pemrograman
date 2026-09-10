#include <stdio.h> 
 
#define PI 3.14 
 int main() { 
    float jari_jari = 10;     
	float luas, keliling; 
 
    luas = PI * jari_jari * jari_jari;     
	keliling = 2 * PI * jari_jari; 
 
    printf("Jari-jari = %.2f\n", jari_jari);     
	printf("Luas      = %.2f\n", luas);     
	printf("Keliling  = %.2f\n", keliling); 
 
    return 0; 
} 

