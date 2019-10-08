#include <stdio.h>

int dp[1000001], N;       //동적 계획법 , 입력받는 개수
int T[6];              // 소요 기간
int P[1001];           // 급여

int main(){
    int i, j;       //반복문

    scanf("%d \n", &N);

    for (i= 1; i< N; i++){
        scanf("%d %d \n",&T[i], &P[i]);
    }
    for(i= 1; i<= N; i++){
        for(j= 1; j<= i; j++){
            if(j + T[j] -1 <= i){
                if(dp[i] < dp[j-1] + P[j]){
                    dp[i] = dp[j-1] +P[j];
                }
            }
        }
    }
    printf("%d", dp[N]);
}