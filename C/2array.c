#include<stdio.h>

int main(void){
    int ary[3][9];
    int i, j;

    //구구단 선언
    for(i=0; i<3;i++){
        for(j=0;j<9;j++){
            ary[i][j] = (2+i) * (j+1);
        }
    }

    //구구단 출력
    for(i=0;i<3;i++){
        for(j=0; j<9; j++){
            printf("%d ", ary[i][j]);
        }
        printf("\n");
    }
    return 0;
}