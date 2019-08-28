#include<stdio.h>

int n;  // n<100
long long dp[101];
int main(){
    int t;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;

    scanf("%d", &n);

    while(n--){
        scanf("%d", &t);

        for(int i = 4; i <= t; i++){
            dp[i] = dp[i-2] + dp[i-3];
        }
        printf("%lld \n",dp[t]);
    }
    return 0;
}