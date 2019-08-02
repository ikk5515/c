#include<stdio.h>
#include<stdlib.h>

int main(void){
    int arrlen = 5;     // 초기 배열의 길이
    int idx = 0;        // 배열 인덱스
    int i;
    int *arr = (int *)malloc(sizeof(int)*arrlen);

    while(i){
        printf("정수 입력: ");
        scanf("%d", &arr[idx]);
        
        if(arr[idx] == -1){        // 입력의 종료 검사
            break;
        }
        if(arrlen == idx+1){               // 배열의 확장 필요성 검사
            arrlen += 3;
            arr = (int *)realloc(arr, sizeof(int)*arrlen);
        }
        idx++;
    }
    for(i=0; i<idx; i++){
        printf("입력한 숫자: %d\n", arr[i]);
    }
    free(arr);
    return 0;
}