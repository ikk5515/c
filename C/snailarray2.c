#include <stdio.h>
//양의 정수 하나를 입력받아 n x n인 달팽이 배열을 출력하는 프로그램

void showSnail(int n){
    int snail[n][n]; // n x n 달팽이 배열
    int len = n; // 가로,세로의 길이
    int num = 1; // 1부터 n*n까지 숫자가 채워질 변수
    int i,j;
    int x=-1, y=0; 
    int dir = 1; // 진행방향
 
    while(1){ 
        for(i=0; i<len; i++){ // 가로 채우기
            x += dir;
            snail[y][x] = num++;
            }
        if(--len<0) // 반복문 탈출을 통한 배열 저장 종료 
            break;
        for(i=0; i<len; i++){ // 세로 채우기
            y += dir;
            snail[y][x] = num++;
        }
    dir *= -1; // 진행방향 180도 회전
    }

    for(i=0; i<n; i++){ // 출력
        for(j=0; j<n; j++)
            printf("%2d ", snail[i][j]);
    printf("\n"); 
 }
}

int main(void) {
 int input; // 입력받을 자연수 변수
 
 printf("숫자를 입력하시오 : ");
 scanf("%d", &input);
 printf("\n");
 
 showSnail(input);
 return 0;
}