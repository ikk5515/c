#include<stdio.h>

int SquareByValue(int num){
    return num*num;
}

int SquareByReference(int *ptr){
    int num = *ptr;
    *ptr = num*num;
}

int main(void){
    int num;
    scanf("%d", &num);
    printf("%d \n", SquareByValue(num));
    SquareByReference(num);
    printf("%d \n", num);
    return 0;
}