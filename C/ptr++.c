#include<stdio.h>

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int *bptr = &arr[4];
    int i, total =0;

    for(i=0; i<5; i++){
        total += *(bptr--);
    }
    printf("%d", total);
    return 0;
}