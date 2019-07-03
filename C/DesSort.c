#include<stdio.h>

void DesSort(int ary[], int len);

int main(void){
    int i;
    int ary[7];
    int arySize = sizeof(ary)/sizeof(int);
    printf("정수 7개를 입력하세요. \n");
    for(i=0;i<arySize; i++){
        printf("입력: ");
        scanf("%d", &ary[i]);
    }

    DesSort(ary, arySize);

    for(i=0; i<arySize; i++){
        printf("%d ", ary[i]);
    }
    printf("\n");
    return 0;
}

void DesSort(int ary[], int len){
    int i, j;
    int temp;
    
    for(i=0; i<len-1; i++){
        for(j=0; j<(len-i)-1; j++){
            if(ary[j]<ary[j+1]){
                temp = ary[j];
                ary[j] = ary[j+1];
                ary[j+1] = temp;
            }
        }
    }
    return;
}