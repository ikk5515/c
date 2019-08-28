#include<stdio.h>

int main(){
    int i,n;
    scanf("%d", &n);
    int dp[1000001];
    dp[0] = 0; dp[1] = 1; dp[2] = 2;

    for(i = 3; i<= n; i++){
        dp[i] = dp[i-2] + dp[i-1];
        dp[i] %= 15746;
    }
    printf("%d" , dp[n]);
}