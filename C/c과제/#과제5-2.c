#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i, r;       //반복문 , 랜덤난수 r
    int temp, count[6] = {0} ;      // time(NULL), 주사위 6면 배열 및 주사위

    temp = time(NULL);
    srand(temp);    //seed

    printf("*** 주사위 던지기 결과 ***\n");

    for (i = 0; i < 100; i++){
        r = rand() % 6;   // 1 ~ 6까지의 랜덤난수

        if(r == 0)
        {
            count[0] += 1;
        }
        if(r == 1)
        {
            count[1] += 1;
        }
        if(r == 2)
        {
            count[2] += 1;
        }
        if(r == 3)
        {
            count[3] += 1;
        }
        if(r == 4)
        {
            count[4] += 1;
        }
        if(r == 5)
        {
            count[5] += 1;
        }
    }
    printf("\t1면: %d \n \t2면: %d \n \t3면: %d \n \t4면: %d \n \t5면: %d \n \t6면: %d \n", count[0],count[1],count[2],count[3],count[4],count[5]);

    return 0;
}