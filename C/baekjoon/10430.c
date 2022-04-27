#include<stdio.h>

int main(void){
    int A,B,C;
    int sum1,sum2,sum3,sum4;

    scanf("%d %d %d",&A, &B, &C);

    sum1 = (A+B)%C;
    sum2 = (A%C + B%C)%C;
    sum3 = (A*B)%C;
    sum4 = (A%C * B%C)%C;

    printf("%d %d %d %d", sum1, sum2, sum3, sum4);
    return 0;
}