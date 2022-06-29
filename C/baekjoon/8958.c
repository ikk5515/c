//BOJ_8958_OX퀴즈
#include <stdio.h>
#include <string.h>
#define SIZE 100000

int main() {
    int N;                  // 테스트 케이스의 개수
    int sum, score = 0;     // 점수의 합과 점수를 계산해줄 변수
    char count[SIZE];        // O,X를 입력받을 배열

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        score = 1;
        sum = 0;
        scanf("%s", count);

        for (int j = 0; j < strlen(count); j++) {
            if (count[j] == 'O') {
                sum += score;
                score++;
            }
            if (count[j] == 'X') {
                score = 1;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}