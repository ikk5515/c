#include <stdio.h>

int main() {
    int count = 0;              //입력받을 수의 개수
    int score[1000]; // 입력받을 점수를 저장할 배열
    int MAX;        // 최대값을 저장하기 위한 변수
    double result = 0.0;     // 결과값 저장
    int a = 0;
    double total[1000];    // 계산한 점수값을 저장할 배열


    scanf("%d", &count);

    for (int i = 0; i < count; i++) {       // 입력받은 수를 score배열에 저장
        scanf("%d", &a);
        score[i] = a;
    }
    MAX = score[0];                         // MAX배열에 입력받은 값 첫번째 수 대입
    for (int i = 0; i < count; i++) {       // MAX값을 구하기 위해 반복문을 돌림
        if (MAX < score[i]) {
            MAX = score[i];
        }
    }

    for (int i = 0; i < count; i++) {       // 입력한 점수를 MAX * 100으로 나누어 준 값 계산
        total[i] = (double)score[i] / MAX * 100.0;      // 점수를 최대값으로 나누고 100을 곱한값을 total배열에 저장
        result += total[i];
    }
    result /= count;
    printf("%f\n", result);

    return 0;
}