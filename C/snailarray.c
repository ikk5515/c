#include<stdio.h>

int turnArray (int (*ptrArr)[4], int len);

int main(void){
    int i;
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8,},
        {9,10,11,12},
        {13,14,15,16}
    };

    int arySize = sizeof(arr)/sizeof(arr[0]);
    
    for(i=0; i<4; i++){
        turnArray(arr, arySize);
        printf("\n");
    }
    return 0;
}

int turnArray (int (*ptrArr)[4], int len){
    int i, j;
    int temp[len][len];

    for(i=0; i<len; i++){
        for(j=0; j<len; j++){
            printf("%3d ", ptrArr[i][j]);
            }
        printf("\n");
    }
    for(i=0; i<len; i++){
        for(j=0; j<len; j++){
            temp[j][(len-1)-i]=ptrArr[i][j];
        }
    }
    for (i=0; i<len; i++){
        for(j=0; j<len; j++){
            ptrArr[i][j]=temp[i][j];
        }
    }
    return 0;
}