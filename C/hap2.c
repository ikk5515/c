/*함수의 원형을 선언하지 않은 예
피호출 함수가 호출함수 보다 앞에 위치하면 함수의 원형을 생략 가능*/
#include<stdio.h>
int sum(int n){ //함수 정의
    int i;
    int result = 0;

    for(i=0;i<=n;i++)
        result += i;
    return result;
}
int main(void){
    int k, hap;
    printf("정수 입력: ");
    scanf("%d", &k);
    hap = sum(k); //함수 호출
    printf("1부터 %d까지의 합은 %d입니다. \n", k,hap);
}