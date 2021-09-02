#include <stdio.h>

int main(){
    int score[10] = {0};  // 점수 배열
    int k;  // 배열 입력 카운터

    for ( k = 0; k < 10; k++)
    {
        printf("%d 번째 학생의 점수 입력: ", k+1);
        scanf("%d", &score[k]);
    }

    int i,j,temp;  // 버블정렬

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if(score[j+1] > score[j])
                temp = score[j]; score[j] = score[j+1]; score[j+1] = temp;
        }
        
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d 번째 크기의 값: ",i+1);
        printf("%d \n", score[i]);
    }
    
    return 0;
}