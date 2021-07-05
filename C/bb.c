#include <stdio.h>

int main(){
    int num1, num2, num3, num4; //score
    int num5; // average
    
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    
    num5 = (num1 + num2 + num3 + num4) / 4;

    if (num1 >= 0 && num1 <= 100 && num2 >= 0 && num2 <= 100 && num3 >= 0 && num3 <= 100 && num4 >= 0 && num4 <= 100){
    if (num5 >= 85){
        printf("합격");
    }
    else {
        printf("불합격");
    }
    }
    else{
        printf("잘못된 점수");
    }
    return 0;
}