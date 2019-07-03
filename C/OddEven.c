#include<stdio.h>

void findOdd(int *ptr, int arySize){
    printf("홀수 출력: ");
    int i;
    for(i=0;i<arySize;i++){
        if(ptr[i]%2 != 0){
            printf("%d ", ptr[i]);
        }
    }
    printf("\n");
    return;
}

void findEven(int *ptr, int arySize){
    printf("짝수 출력: ");
    int i;
    for(i=0; i<arySize; i++){
        if(ptr[i]%2 == 0){
            printf("%d ", ptr[i]);
        }
    }
    printf("\n");
    return;
}

int main(){
    int ary[10];
    int len;
    printf("총 10개의 숫자 입력 \n");
    for(int i=0; i<10; i++){
        printf("입력: ");
        scanf("%d", &ary[i]);
    }
    printf("\n");
    len = sizeof(ary) / sizeof(int);

    findOdd(ary, len);
    findEven(ary, len);
    return 0;
}
