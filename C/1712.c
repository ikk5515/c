#include<stdio.h>

int main(void){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    int diff = c - b;
    if(diff <= 0) printf("-1 \n");
    else
        printf("%d \n", a / diff + 1);
    return 0;
}