#include <stdio.h>

#define N 8

int main()
{
    int data[N] = {7, 8, 4, 2, 9, 3, 1, 6};
    int urut[N];
    int i, j, tmp, terbesar, jumlah = 0;
    double rata2, tengah;


    printf("Data (index 1..%d):\n", N);
    for (i = 0; i < N; i++)
        printf("data[%d] = %d\n", i + 1, data[i]);


    printf("\nAngka genap : ");
    for (i = 0; i < N; i++)
        if (data[i] % 2 == 0)
            printf("%d ", data[i]);
    printf("\n");


    terbesar = data[0];
    for (i = 1; i < N; i++)
        if (data[i] > terbesar)
            terbesar = data[i];
    printf("Angka terbesar : %d\n", terbesar);

    for (i = 0; i < N; i++)
        urut[i] = data[i];
    for (i = 0; i < N - 1; i++)
        for (j = 0; j < N - 1 - i; j++)
            if (urut[j] > urut[j + 1]) {
                tmp = urut[j];
                urut[j] = urut[j + 1];
                urut[j + 1] = tmp;
            }
    printf("Urut dari kecil : ");
    for (i = 0; i < N; i++)
        printf("%d ", urut[i]);
    printf("\n");


    for (i = 0; i < N; i++)
        jumlah += data[i];
    rata2 = (double)jumlah / N;
    printf("Rata-rata : %.2f\n", rata2);


    if (N % 2 == 1)
        tengah = urut[N / 2];
    else
        tengah = (urut[N / 2 - 1] + urut[N / 2]) / 2.0;
    printf("Nilai tengah (median) : %.2f\n", tengah);

    return 0;
}