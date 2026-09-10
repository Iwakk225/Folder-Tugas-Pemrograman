#include <iostream>
#include <cmath>
#define PI 3.14

int main() {

    float jari2 = 7, tinggi = 15, garis_pelukis = 25, luas_alas, luas_selimut, luas_permukaan, volume;

    luas_alas = PI * jari2 * jari2;
    luas_selimut = PI * jari2 * garis_pelukis;
    luas_permukaan = PI * jari2 * (jari2 + garis_pelukis);
    volume = 1.0/3.0 * PI * jari2 * jari2 * tinggi;

    printf("Jari jari: %.2f\n", jari2);
    printf("Tinggi: %.2f\n", tinggi);
    printf("Garis pelukis: %.2f\n", garis_pelukis);
    printf("Luas alas kerucut: %.2f\n", luas_alas);
    printf("Luas selimut kerucut: %.2f\n", luas_selimut);
    printf("Luas permukaan kerucut: %.2f\n", luas_permukaan);
    printf("Volume kerucut: %.2f\n", volume);

}