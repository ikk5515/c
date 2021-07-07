#include <stdio.h>

int main (){
    int height, i, j;
    scanf("%d", &height);

    for (i = 0; i < height; i++){
        for (j = height - 1; j >= 0 ; j--){
            if (j > i)
                printf(" ");
            else
                printf("*");
        }
        for (j = 0 ; j < height - 1; j++){
            if(j < i){
                printf("*");
            }
        }
        printf("\n");
    }

} 