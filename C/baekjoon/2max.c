#include<stdio.h>
int main(){
    int x, y;
    int max(int a, int b);
    printf("data: ");
    scanf("%d %d",&x, &y);
    printf("max = %d\n", max(x,y));
}

int max(int a, int b){
    int m;
    if(a>b)
        m=a;
    else
        m=b;
    return (m);
}