#include <stdio.h>

void main() {
    int a[3][4] = { {10,20,30,40},
                    {50,60,70,80},
                    {90,100,110,120} };
    int i, j, hap = 0;

    printf("***** result *****\n\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            hap += *(*(a+i)+j);
            printf("%5d", *(*(a+i)+j)) ;
        }
        printf("\n\n");
    }
    printf("hapgye == %d\n", hap);
}
