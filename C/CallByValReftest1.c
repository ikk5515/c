#include<stdio.h>

void swap (int *ptr1, int *ptr2, int *ptr3){
    int temp = *ptr3;
    *ptr3 = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = temp;
}

int main(void){
    int num1= 10;
    int num2 =20;
    int num3 =30;
    printf("%d %d %d \n", num1 , num2 , num3);
    swap(&num1, &num2, &num3);
    printf("%d %d %d \n" , num1, num2 , num3);
    return 0;
}
