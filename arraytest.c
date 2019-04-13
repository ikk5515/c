#include<stdio.h>

int main(){

    int arr[5];
    int max,min,sum,i;

    printf("입력: ");
    for (i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    max=min=sum=arr[0];

    for(i = 1; i < 5; i++){
        sum += arr[i];
        if(max<arr[i]){
        max=arr[i];
        }
        if ((min>arr[i])) {
            min=arr[i];
        }      
    }

    printf("최댓값 : %d \n", max);
    printf("최솟값: %d \n", min);
    printf("총합: %d \n", sum);

    return 0;
}