#include<stdio.h>

int main(){
    int i,n;
    long long d[91];

    scanf("%d", &n);

    d[0] = 0, d[1] = 1;

    for(i = 2; i<=n; i++){
        d[i] = d[i-2] + d[i-1];
    }
    printf("%lld", d[n]);
}