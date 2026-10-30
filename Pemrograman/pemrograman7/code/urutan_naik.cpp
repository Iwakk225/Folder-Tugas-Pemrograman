#include <stdio.h>

#define MAXDATA 100

int main()
{
    int data[MAXDATA];
    int n, i, j, tmp;

    do {
        printf("Jumlah data (minimal 5, maksimal %d) : ", MAXDATA);
        scanf("%d", &n);
        if (n < 5 || n > MAXDATA)
            printf("Jumlah data tidak valid!\n");
    } while (n < 5 || n > MAXDATA);

    for (i = 0; i < n; i++) {
        printf("Data ke-%d : ", i + 1);
        scanf("%d", &data[i]);
    }

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (data[j] > data[j + 1]) {
                tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }

    printf("\nData setelah diurutkan (naik) :\n");
    for (i = 0; i < n; i++)
        printf("%d ", data[i]);
    printf("\n");

    return 0;
}