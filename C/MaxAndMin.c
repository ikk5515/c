#include<stdio.h>

void MaxAndMin(int *arr, int size, int **mxptr, int **mnptr){
    int i;
    int *max, *min;
    max = min = &arr[0];
    
    for(i=0; i<size; i++){
        if(*max < arr[i])
            max = &arr[i];
        if(*min > arr[i])
            min = &arr[i];
    }

    *mxptr=max;
    *mnptr=min;
    
}
int main(void){
    int *maxPtr;
    int *minPtr;
    int arr[5];
    int i;

    for(i=0; i<5; i++){
        printf("%d번쩨 정수 입력: ", i+1);
        scanf("%d", &arr[i]);
    }
    MaxAndMin(arr, sizeof(arr)/sizeof(int), &maxPtr, &minPtr);
    printf("최대 : %d   최소: %d   \n", *maxPtr, *minPtr);
    return 0;
}