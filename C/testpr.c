#include<stdio.h>
#include<math.h>
int main(){
    int i;
    double x, h,sin(), cos(), tan();

    printf("시작값(x)과 변위(h)를 입력: ");
    scanf("%lf%lf", &x,&h);
    printf("\n            ::::  삼각함수 표 ::::\n");
    printf("-----------------------------------------------------------\n");
    printf("      x      sin(x)       cos(x)     tan(x)  \n");

    printf("----------------------------------------------------------");
    for(i=0;i<10;i++){
        printf("%10g %10g %10g %10g \n", x, sin(x), cos(x), tan(x));
    
    x = x+h;
    }
}