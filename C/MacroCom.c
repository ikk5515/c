#include<stdio.h>
#define MAX(a,b) ((a)>(b) ? (a) : (b))

int main(void){
    int num1,num2;
    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);
    printf("\n큰 수: %d \n",MAX(num1,num2));
    return 0;
}