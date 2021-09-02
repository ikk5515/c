#include <stdio.h>

int main(){
    int aList[5] = {30, 40, 10, 50, 20};
    int i, j, temp;

    for(i = 0; i < 4; i++){
        for(j = i + 1; j < 5; j++){
            if(aList[j] < aList[i]){
                temp = aList[i];
                aList[i] = aList[j];
                aList[j] = temp;
            }
        }
    }

    for(i = 0; i < 5; i++){
        printf("%d  ",aList[i]);
    }
    putchar('\n');
    return 0;
}