#include <stdio.h>

int main(){
    int i;
    int min, max;
    int aList[5];


    for(i = 0; i < 5; i++){
        scanf("%d", &aList[i]);
    }

    min = aList[0];     // 최대 최소를 배열의 첫번째 원소로 초기화
    max = aList[0];
    
    
    for(i = 0; i < 5; i++){

            if(aList[i] > max)
                max = aList[i];

            if(aList[i] < min)
                min = aList[i];
    }
    
    printf("MIN : %d, MAX : %d", min, max);
    return 0;
}