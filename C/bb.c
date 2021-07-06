#include <stdio.h>

int main (){
    
    int charge;

    scanf("%d", &charge);
    
    while (charge >= 1200)
    {
        charge -= 1200;
        printf("%d\n", charge);
    }
    return 0;
} 