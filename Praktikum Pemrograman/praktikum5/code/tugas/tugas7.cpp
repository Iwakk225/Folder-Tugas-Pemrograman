#include <stdio.h>

int main(void) {

    int n;                          
    int faktorial = 1;              

    printf("%-5s %-8s %s\n", "n", "n!", "Hasil");   

    for (n = 1; n <= 10; n++) {     
        faktorial = faktorial * n; 
        printf("%-5d ", n);         
        printf("%d!", n);        
        if (n < 10)
            printf("      ");       
        else
            printf("     ");        
        printf("%d\n", faktorial);  
    }

    return 0;                       
}
