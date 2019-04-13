#include<stdio.h>

int main (void){
    int sec, min, hour;

    printf("초(second) 입력\n");
    scanf("%d", &sec);

    min = sec/60;
    hour = min/60;
    sec = sec%60;
    min = min%60;

    printf("[h:%d, m:%d, s:%d", hour, min, sec);
    return 0;
}