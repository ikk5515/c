#include <stdio.h>

int Max(int a, int b)
{
    return a > b ? a : b;
}

int main(){
    int i, n;
    int dp[301][2] = {0, }, a[301] = {0};
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    dp[1][0] = dp[1][1] = a[1];
    for (i = 2; i <= n; i++){
        dp[i][0] = dp[i - 1][1] + a[i];               //3칸 한번에 밟지 X
        dp[i][1] = Max(dp[i - 2][0], dp[i - 2][1]) + a[i];       //점화식을 통해 3칸 밟지않게
    }
    printf("%d", Max(dp[n][0], dp[n][1]));
}