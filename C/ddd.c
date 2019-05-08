#include <stdio.h>

int main(void){
	int x; // 데이터 입력
	int count=0; // while문 횟수
	int max, min; // 최댓값, 최솟값
	int sum=0; // 평균을 구하기 위한 총합
	int average; // 평균

	while(1) { //무한반복

		printf("데이터 입력 : ");
		scanf("%d", &x);

		if(x<0)
			break; // 음수 입력시 while문 벗어나기
		
		count++;

		if(count == 1){ // 처음으로 받은 x의 값을 max와 min 초기화
			max = x;
			min = x;
		}

		if(x>max)
			max = x;

		if(x<min)
			min = x;

		sum += x;
	}

	average = sum / count;

	printf("입력한 데이터 중에서 최소값 = %d\n", min);
	printf("입력한 데이터 중에서 최댓값 = %d\n", max);
	printf("입력한 데이터의 평균 = %d\n", average);
    printf("입력한 데이터의 총점 = %d", sum);

	return 0;
}