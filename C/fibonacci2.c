#include<stdio.h>

int main(){
    int a,tmp,i; //tmp는 다음의 수
    int last = 0; //이전의 수
    int cur = 1; //현재의 수

    scanf("%d", &a);

    if (a < 2) {
        if(a == 0)
            printf("0");
        else
            printf("1");
    }
    
    else {
        for( i = 0; i < a - 1; i++) {
            tmp = cur + last;
            last = cur;
            cur = tmp;
        }
        printf("%d", tmp);
    }
    return 0;
}