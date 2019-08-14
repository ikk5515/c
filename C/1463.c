#include<stdio.h>
int dp[100001];

int min (int a, int b){
    return a > b ? b : a;
}

int main(void){
    int n, i;

    scanf("%d", &n);

    dp[0] = dp[1] = 0;

    for(i = 2; i <= n; i++){
        dp[i] = dp[i-1] + 1;
        if(i%2==0) min(dp[i] = dp[i/2]+1);
        if(i%3==0) min(dp[i] = dp[i/3]+1);
    }
    printf("%d \n", n);
}