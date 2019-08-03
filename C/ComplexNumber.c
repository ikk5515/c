#include<stdio.h>

typedef struct{
    double rNum;             // 실수
    double iNum;            // 허수
} Complex;

void ComADD(Complex, Complex);
void ComMul(Complex, Complex);

int main(void){
    Complex c1, c2;
    int i;

    // 두 개의 복소수를 입력받음
    printf("복소수 입력1[실수 허수]: ");
    scanf("%lf %lf", &c1.rNum, &c1.iNum);
    printf("복소수 입력2[실수 허수]: ");
    scanf("%lf %lf", &c2.rNum, &c2.iNum);

    ComADD(c1,c2);       // 복소수 덧셈함수 호출
    ComMul(c1,c2);      // 복소수 곱셈함수 호출

    return 0;
}

void ComADD(Complex comA1, Complex comA2){
    Complex add;

    add.rNum = comA1.rNum + comA2.rNum;
    add.iNum = comA1.iNum + comA2.iNum;

    // 덧셈 결과 출력
    printf("\n합의 결과] 실수: %f, 허수: %f", add.rNum, add.iNum);
}

void ComMul(Complex comM1, Complex comM2){
    Complex MUL;

    MUL.rNum = comM1.rNum * comM2.rNum - comM1.iNum * comM2.iNum;
    MUL.iNum = comM1.rNum * comM2.rNum + comM1.iNum * comM2.iNum;

    // 곱셈 결과 출력
    printf("\n곱의 결과] 실수: %f, 허수: %f", MUL.rNum, MUL.iNum);
}