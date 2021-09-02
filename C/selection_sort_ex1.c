#include <stdio.h>

int main(){
    int aLitst[5] = {30, 40, 10, 50, 20};
    int i, j, minindex, temp;

    //오름차순 (작은 수 -> 큰 수)
    for(i = 0; i < 4; i++){
        minindex = i;
        for(j = i+1; j < 5; j++){
            if(aLitst[minindex] > aLitst[j]){     // 부등호를 반대로 하면 내림차순 으로 변경됨
                //aList[minindex]을 기준으로 aList[j]를 검사한다.
                //aList[minindex]의 값 보다 작은 값을 발견시 minindex = j가 된다.        
                minindex = j;
            }
        }
        if(minindex != i){
            temp = aLitst[minindex];
            aLitst[minindex] = aLitst[i];
            aLitst[i] = temp;
        }
    }

    for(i = 0; i < 5; i++){
        printf("%d  ", aLitst[i]);
    }
    putchar('\n');
    return 0;
}