#include <stdio.h>

int main() {
    float celcius = 100;
    float fahrenheit;

    fahrenheit = (9.0 / 5.0) * celcius + 32;

    printf("Celcius    = %.2f\n", celcius);
    printf("Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
