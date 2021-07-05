#include <stdio.h>

int main(){
    int num1;
    
    scanf("%d", &num1);
    
    do{
        printf("%d ", num1 % 10);
        num1 /= 10;
    }while (num1 != 0);
    
    return 0;
}