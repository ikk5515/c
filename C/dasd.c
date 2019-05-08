#include<stdio.h>

int main(void){
    int i; //for문 증가값
    int n; //입력받을 값의 개수
    printf("입력할 값의 개수: ");
    scanf("%d", &n);
    int temp = 0; // 임의의 MAX 값을 넣을 공간
    int num[n];
    int max = 10;
    int min = 10;

    //정수를 num에 입력
    for(i = 0; i<n; i++){
        printf("%d번째 값을 입력: ",i+1);
        scanf("%d", &num[i]); //입력값을 n에 넣음
        temp += num[i]; //총점,평균을 구하기 위해 temp에 모든값 더함
        if (max < num[i]){
            max = num[i];
        }
        if (min > num[i]){
            min = num[i];
        }
    }
        printf("최대값은 %d, 최소값은 %d 입니다. \n", max, min);

        for (i = 0; i<n; i++) {
            if (max == num[i] || min == num[i]) {
                printf("");
            }
        }
        printf("총점 %d 평균 %d", temp, temp / i);
        return 0;
    }