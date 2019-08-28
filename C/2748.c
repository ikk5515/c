#include<stdio.h>

int n;

long long fibo(int n){
    long long dp[91];
    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2; i <= n; i++)
        dp[i] = dp[i-1] + dp[i-2];
    return dp[n];
}
int main(){
    scanf("%d", &n);
    printf("%lld", fibo(n));
    return 0;
}