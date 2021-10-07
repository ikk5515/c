#include<stdio.h>

int main(){
    int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    for(int (*row)[4] = arr; row < arr+3; row++) {
        for(int *col = *row; col < *row + 4; col++){
            printf("%3d", *col);
        }
        printf("\n");
    }
}