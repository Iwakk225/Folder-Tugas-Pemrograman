#include <iostream>
#include <cmath>
#define PI 3.14

using namespace std;

int main() {
    float jari2 = 7,tinggi = 15, luas_alas, luas_selimut, luas_permukaan, volume;

    luas_alas = PI * jari2 * jari2;
    luas_selimut = 2 * PI * jari2 * tinggi;
    luas_permukaan = 2 * PI * jari2 * (jari2 + tinggi);
    volume = PI * jari2 * jari2 * tinggi;

    cout << "Luas alas tabung: " << luas_alas << endl;
    cout << "Luas selimut tabung: " << luas_selimut << endl;
    cout << "Luas permukaan tabung: " << luas_permukaan << endl;
    cout << "Volume tabung: " << volume << endl;

    return 0;
}