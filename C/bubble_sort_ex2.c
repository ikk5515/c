#include <stdio.h>

int main(){
    int aList[5] = {30, 40, 10 , 50, 20};
    int i, j, temp;

    for(i = 4; i > 0; i--){
        for(j = 0; j < i; j++){
            if(aList[j] > aList[j+1]){
                temp = aList[j];
                aList[j] = aList[j+1];
                aList[j+1] = temp;
            }
        }
    }

    for(i = 0; i < 5; i++){
        printf("%d  ",aList[i]);
    }
    putchar('\n');
    return 0;
}