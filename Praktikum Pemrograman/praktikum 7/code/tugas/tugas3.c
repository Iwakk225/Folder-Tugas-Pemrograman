#include <stdio.h>

int main(void) {
    const char *nama[4] = {"Ahmad", "Adang", "Dani", "Edi"};
    int nilai[4][3] = {
        {81, 90, 62},
        {50, 83, 87},
        {89, 55, 65},
        {77, 70, 92}
    };
    printf("%-8s %8s %10s %8s %8s\n", "Nama", "Bahasa", "Matematika", "Digital", "Rata2");
    for (int i = 0; i < 4; i++) {
        int total = 0;
        for (int j = 0; j < 3; j++)
            total += nilai[i][j];
        printf("%-8s %8d %10d %8d %8.2f\n", nama[i], nilai[i][0], nilai[i][1], nilai[i][2], total / 3.0);
    }
    return 0;
}