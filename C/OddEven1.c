#include<stdio.h>

int main(void){
    int i, num;
    int OddCount = 0;
    int EvenCount = 9;
    int ary[10] = {};

    printf("총 10개의 숫자 입력 \n");

    for(i=0; i<10; i++){
        printf("입력: ");
        scanf("%d", &num);
        
        switch(num%2){
            case 0:
                ary[EvenCount] = num;
                EvenCount--;
                break;
            case 1:
                ary[OddCount] = num;
                OddCount++;
                break;
        }
    }
    for(i=0; i<10; i++){
        printf("%d ", ary[i]);
    }
    return 0;
}