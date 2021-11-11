#include <stdio.h>
#include <math.h>

int main(){
    double a=0, b=0, c=0;
    double x1=0, x2=0;     // 두 근

    printf("ax^2+bx+c 에서 a,b,c 값 입력: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    int D = b*b - 4*a*c;
    printf("*** 이차방정식의 근 구하기 ***\n");

    if(D > 0) {
        x1 = (-b + sqrt(D)) / 2*a;
        x2 = (-b - sqrt(D)) / 2*a;
        printf("x = %.2f or %.2f \n", x1, x2);
        printf("서로다른 두 실근을 가집니다.\n");
    }
    else if (D == 0){
        x1 = x2 = -b / (2*a);
        printf("x = %.2f  \n", x1);
        printf("중근을 가집니다.\n");
    }
    else{
        printf("근이 없습니다.(허근) \n");
    }
    return 0;
}