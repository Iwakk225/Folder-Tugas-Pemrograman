#include <stdio.h>

int main() {
    
    float h_cpu, h_ram, h_mainboard;
    float cpu, ram, mainboard;

    h_cpu = 4530000;
    h_ram = 2795000;
    h_mainboard = 4940000;

    cpu = h_cpu - (h_cpu * 0.15);
    ram = h_ram - (h_ram * 0.08);  
    mainboard = h_mainboard - (h_mainboard * 0.10);

    printf("\n");
    printf("================================================================================\n");
    printf("| No | Nama Barang      | Harga       | Diskon | Jumlah | Harga Setelah Diskon |\n");
    printf("================================================================================\n");
    printf("| 1  | CPU 850MHz       | %-11.2f | 15%%    | 1      | %-18.2f |\n", h_cpu, cpu);
    printf("| 2  | RAM 128 MHz      | %-11.2f | 8%%     | 1      | %-18.2f |\n", h_ram, ram);
    printf("| 3  | Motherboard PIII | %-11.2f | 10%%    | 1      | %-18.2f |\n", h_mainboard, mainboard);
    printf("================================================================================\n");
    printf("| Total |                  |             |        |        | %-18.2f |\n", cpu + ram + mainboard);
    printf("================================================================================\n");

}