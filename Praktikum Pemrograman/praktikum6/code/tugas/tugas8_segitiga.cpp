#include <iostream>
#include <string>

bool validSegitiga(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) return false;
    return (a + b > c) && (a + c > b) && (b + c > a);
}
std::string jenisSegitiga(double a, double b, double c) {
    if (!validSegitiga(a, b, c)) return "tidak valid";
    if (a == b && b == c) return "sama sisi";
    if (a == b || b == c || a == c) return "sama kaki";
    return "sembarang";
}
int main() {
    double uji[][3] = {{3,4,5},{5,5,5},{5,5,8},{1,2,3},{0,4,5},{-3,4,5},{2,3,10}};
    for (auto &u : uji)
        std::cout << "(" << u[0] << ", " << u[1] << ", " << u[2] << ") -> "
                  << (validSegitiga(u[0],u[1],u[2]) ? "valid, " : "tidak valid, ")
                  << jenisSegitiga(u[0],u[1],u[2]) << '\n';
    return 0;
}
