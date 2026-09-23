#include <stdio.h>

int main() {
	
    int accumulator, bilangan;
    char op;

    printf("Mulai perhitungan\n");

    scanf("%d %c", &accumulator, &op);

    while (op != 'e') {

        switch (op) {

            case 's':
                printf("= %d\n", accumulator);
                break;

            case '+':
                scanf("%d", &bilangan);
                accumulator += bilangan;
                printf("= %d\n", accumulator);
                break;

            case '-':
                scanf("%d", &bilangan);
                accumulator -= bilangan;
                printf("= %d\n", accumulator);
                break;

            case '*':
                scanf("%d", &bilangan);
                accumulator *= bilangan;
                printf("= %d\n", accumulator);
                break;

            case '/':
                scanf("%d", &bilangan);

                if (bilangan == 0) {
                    printf("Error: tidak boleh dibagi 0\n");
                    return 1;
                }

                accumulator /= bilangan;
                printf("= %d\n", accumulator);
                break;

            case '%':
                scanf("%d", &bilangan);
                accumulator %= bilangan;
                printf("= %d\n", accumulator);
                break;

            case '&':
                scanf("%d", &bilangan);
                accumulator &= bilangan;
                printf("= %d\n", accumulator);
                break;

            case '|':
                scanf("%d", &bilangan);
                accumulator |= bilangan;
                printf("= %d\n", accumulator);
                break;

            default:
                printf("Operator tidak valid\n");
        }

        scanf(" %c", &op );
    }

    printf("Akhir perhitungan\n");

    return 0;
}
