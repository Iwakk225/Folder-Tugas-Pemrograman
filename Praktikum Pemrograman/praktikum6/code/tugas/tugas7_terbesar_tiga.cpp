#include <iostream>

double terbesarTiga(double a, double b, double c) {
    double maks = a;
    if (b > maks) maks = b;
    if (c > maks) maks = c;
    return maks;
}
int main() {
    double uji[][3] = {{3,9,5},{7,7,7},{-1,-5,-3},{1,2,9},{9,2,1},{0,-2.5,-0.5}};
    for (auto &u : uji)
        std::cout << "terbesarTiga(" << u[0] << ", " << u[1] << ", " << u[2]
                  << ") = " << terbesarTiga(u[0], u[1], u[2]) << '\n';
    return 0;
}
