#include<stdio.h>

int main(void){

    int num[] = 0;
    int temp = 0; // 임의의 MAX 값
    int i; // for문 증가값
    int n; //입력받을 수의 개수
    int max = num[0];
    int min = 10;
    scanf("%d", &num); // 입력받을 개수 입력

    //정수를 num에 입력
    for(i = 0; i<n; i++){
        printd("%d번째 값을 입력: ",i+1);
        scanf("%d", &num[i]); //입력값을 n에 넣음
        temp += num[i]; //총점,평균을 구하기 위해 temp에 모든값 더함
        if (max < num[i]){
            min = num[i];
        }
        if (min > num[i]){
            min = num[i];
        }
    }
        printf("최대값은 %d, 최소값은 %d 입니다. \n", max, min);

        for (i = 0; i<n; i++) {
            if (max == num[i] || min = num[i]) {
                printf("");
            }
            else {
                printf("유효점수 %d \n", num[i]);
            }
        }
        printf("총점 %d 평균 %d,", temp, temp / i);

        return 0;
    }