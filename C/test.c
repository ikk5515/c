#include <stdio.h>

int main(){
    int i;
    int a = 0, b = 0;
    int aList[5] = {0};

    for(i = 0; i < 5; i++){
        scanf("%d", &aList[i]);
            if(aList[0] >= aList[i])
                a = aList[i];
            if(aList[i] > aList[0])
                b = aList[i];
    }
    
    printf("MIN : %d, MAX : %d", a, b);
    return 0;
}