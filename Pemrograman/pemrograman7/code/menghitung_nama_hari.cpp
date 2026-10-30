#include <stdio.h>

int main()
{
    int kodeBulan1[12]  = {1, 4, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6};
    int kodeBulan1K[12] = {0, 3, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6};   
    char *namaHari[7] = {"Sabtu", "Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat"};

    int hari2[12]   = {6, 3, 3, 0, 5, 2, 0, 4, 1, 6, 3, 1};
    int hari2K[12]  = {0, 4, 3, 0, 5, 2, 0, 4, 1, 6, 3, 1};
    int pasar2[12]  = {0, 4, 1, 0, 0, 4, 4, 3, 2, 2, 1, 1};
    int pasar2K[12] = {1, 0, 1, 0, 0, 4, 4, 3, 2, 2, 1, 1};
    char *namaPasaran[5] = {"Legi", "Pahing", "Pon", "Wage", "Kliwon"};

    int tgl, bln, thn, kabisat, kode, kode2, pas;

    printf("Masukkan tanggal (dd-mm-yy) : ");
    scanf("%d-%d-%d", &tgl, &bln, &thn);

    if (thn >= 1900) thn -= 1900;         
    if (tgl < 1 || tgl > 31 || bln < 1 || bln > 12 || thn < 0 || thn > 99) {
        printf("Tanggal tidak valid (tahun harus 1900-1999)!\n");
        return 1;
    }

    kabisat = (thn % 4 == 0 && thn != 0);    

    kode = (tgl + (kabisat ? kodeBulan1K[bln - 1] : kodeBulan1[bln - 1])
            + thn + thn / 4) % 7;
    printf("Tanggal tersebut adalah hari %s.\n", namaHari[kode]);

    kode2 = ((tgl + thn + thn / 4) - (kabisat ? hari2K[bln - 1] : hari2[bln - 1])) % 7;
    if (kode2 < 0) kode2 += 7;
    pas = (tgl + thn / 4 - (kabisat ? pasar2K[bln - 1] : pasar2[bln - 1])) % 5;
    if (pas < 0) pas += 5;
    printf("Formula II : hari %s %s.\n", namaHari[kode2], namaPasaran[pas]);

    return 0;
}