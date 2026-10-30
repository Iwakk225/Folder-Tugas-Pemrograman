#include <iostream>
#include <iomanip>
#include <cmath>

double konversiSuhu(double suhu, char asal, char tujuan) {
    double c;
    switch (asal) {
        case 'C': c = suhu; break;
        case 'F': c = (suhu - 32.0) * 5.0 / 9.0; break;   
        case 'R': c = suhu * 5.0 / 4.0; break;            
        default:  return NAN;
    }
    switch (tujuan) {
        case 'C': return c;
        case 'F': return c * 9.0 / 5.0 + 32.0;            
        case 'R': return c * 4.0 / 5.0;                   
        default:  return NAN;
    }
}
int main() {
    struct Uji { double s; char a, t; } uji[] = {
        {100,'C','F'}, {100,'C','R'}, {32,'F','C'}, {80,'R','C'},
        {-40,'C','F'}, {0,'C','C'}, {50,'K','C'}
    };
    std::cout << std::fixed << std::setprecision(2);
    for (auto &u : uji) {
        double h = konversiSuhu(u.s, u.a, u.t);
        std::cout << u.s << " " << u.a << " -> " << u.t << " = ";
        if (std::isnan(h)) std::cout << "satuan tidak valid\n";
        else std::cout << h << '\n';
    }
    return 0;
}
