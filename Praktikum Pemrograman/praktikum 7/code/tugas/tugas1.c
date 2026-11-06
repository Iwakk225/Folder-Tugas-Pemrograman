#include <stdio.h>

int main(void) {
    int data[100], n;
    printf("Jumlah data (1-100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Input tidak valid.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Data ke-%d: ", i + 1);
        if (scanf("%d", &data[i]) != 1) {
            printf("Input tidak valid.\n");
            return 1;
        }
    }
    printf("Sebelum diurutkan: ");
    for (int i = 0; i < n; i++) printf("%d ", data[i]);
    printf("\n");
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    printf("Sesudah diurutkan: ");
    for (int i = 0; i < n; i++) printf("%d ", data[i]);
    printf("\n");
    return 0;
}