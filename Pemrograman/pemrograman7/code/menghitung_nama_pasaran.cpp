#include <stdio.h>

static const int kode[20][12] = {
    {2,3,2,3,3,4,4,0,1,1,2,2},
    {3,4,2,3,3,4,4,0,1,1,2,2},
    {3,4,2,3,3,4,4,0,1,1,2,2},
    {3,4,2,3,3,4,4,0,1,1,2,2},
    {3,4,3,4,4,0,0,1,2,2,3,3},
    {4,0,3,4,4,0,0,1,2,2,3,3},
    {4,0,3,4,4,0,0,1,2,2,3,3},   
    {4,0,3,4,4,0,0,1,2,2,3,3},
    {4,0,4,0,0,1,1,2,3,3,4,4},
    {0,1,4,0,0,1,1,2,3,3,4,4},
    {0,1,4,0,0,1,1,2,3,3,4,4},
    {0,1,4,0,0,1,1,2,3,3,4,4},
    {0,1,0,1,1,2,2,3,4,4,0,0},
    {1,2,0,1,1,2,2,3,4,4,0,0},
    {1,2,0,1,1,2,2,3,4,4,0,0},
    {1,2,0,1,1,2,2,3,4,4,0,0},
    {1,2,1,2,2,3,3,4,0,0,1,1},
    {2,3,1,2,2,3,3,4,0,0,1,1},
    {2,3,1,2,2,3,3,4,0,0,1,1},
    {2,3,1,2,2,3,3,4,0,0,1,1}
};

int main()
{
    char *namaPasaran[5] = {"Pon", "Wage", "Kliwon", "Legi", "Pahing"};
    int hariBulan[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int tgl, bln, thn, maks, kd, total;

    printf("Masukkan tanggal (dd-mm-yyyy) : ");
    scanf("%d-%d-%d", &tgl, &bln, &thn);

    if (thn < 1901 || thn > 2099 || bln < 1 || bln > 12) {
        printf("Input tidak valid (tahun 1901-2099, bulan 1-12)!\n");
        return 1;
    }
    maks = hariBulan[bln - 1];
    if (bln == 2 && thn % 4 == 0) maks = 29;
    if (tgl < 1 || tgl > maks) {
        printf("Tanggal tidak valid!\n");
        return 1;
    }

    kd = kode[thn % 20][bln - 1];
    total = tgl + kd;
    printf("Kode = %d, tanggal + kode = %d + %d = %d\n", kd, tgl, kd, total);
    printf("Pasaran %02d-%02d-%d adalah %s\n", tgl, bln, thn, namaPasaran[total % 5]);

    return 0;
}