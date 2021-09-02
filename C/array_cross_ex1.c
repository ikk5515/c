#include <stdio.h>

int main(){
    int aList[5][5] = {0};
    int i, j, nCounter = 0;

    for(i = 0; i < 5; i++){
        //짝수 행과 홀수 행을 구별
        if(i % 2 == 0){
            //짝수행
            for(j = 0; j < 5; j++){
                //순방향
                aList[i][j] = ++nCounter;
            }
        }
        else{
            //역방향
            for(j = 0; j < 5; j++){
                //역방향 인덱스 계산
                aList[i][4-j] = ++nCounter;
            }
        }
    }
    //배열 출력
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%4d", aList[i][j]);
        }
        putchar('\n');
    }
    return 0;
}