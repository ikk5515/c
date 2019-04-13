#include<stdio.h>
int main(){
    int i;
    int arr[5] = {50, 100 ,150 , 50 , 100};
    int length = sizeof(arr) / sizeof(arr[0]); //5
    int sum = 0;

    for( i = 0; i < length - 1; i++) {
        sum += arr[i] < arr[i + 1];
    }
    printf("%d", sum);

    return 0;
}