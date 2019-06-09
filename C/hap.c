#include<stdio.h>
int sum(int n);
int main(void){
    int k, hap;
    printf("정수 입력: ");
    scanf("%d", &k);
    hap = sum(k);
    printf("1부터 %d까지의 합: %d", k,hap);
}

int sum(int n){
    int i;
    int result = 0;
    for(i = 1; i<=n; i++)
        result += i;
    return result;
}