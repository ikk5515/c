#include<stdio.h>

int main(void){
    int ary[2][4] = {
        {1,2,3,4},
        {5,6,7,8}
    };
    int arr[4][2];
    int i, j;

    for(i=0; i<2; i++){
        for(j=0; j<4; j++){
            arr[j][i] = ary[i][j];
        }
    }

    for(i=0; i<4; i++){
        for(j=0; j<2; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}