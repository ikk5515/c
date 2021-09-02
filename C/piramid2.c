#include <stdio.h>

int main(){
    int i, j, k;

    for(i = 0; i<11; i+=2){
        for(j = 11; j>i; j-=2){
            printf(" ");
        }
        for(k = 0; k<=i; k++){
            printf("*");
        }
        printf("\n");     
    }
    return 0;
}