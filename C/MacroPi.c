#include<stdio.h>
#define PI 3.1415
#define AREA(r) ((r)*(r)*(PI))

int main(void){
    double rad;
    printf("원의 반지름 입력: ");
    scanf("%lf", &rad);
    printf("원주율 = %.2f \n",AREA(rad));
    return 0;
}