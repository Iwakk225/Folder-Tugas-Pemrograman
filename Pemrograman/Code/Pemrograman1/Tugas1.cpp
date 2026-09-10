#include <iostream>
#include <cmath>
#define PI 3.14

using namespace std;

int main() {
    float jari2 = 7, luas, volume, jari2_bola;

    luas =  4 * PI * jari2 * jari2;
    volume = 4.0/3.0 * PI * pow(jari2, 3);
    jari2_bola = sqrt(luas / (4.0 * PI));
    
    cout << "Luas permukaan bola: " << luas << endl;
    cout << "Volume bola: " << volume << endl;
    cout << "Jari-jari bola: " << jari2_bola << endl;

    return 0;
}