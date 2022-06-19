#include <stdio.h>

int main() {
    int input;              // 입력받을 개수
    int number = 0;         // 입력받을 수
    int count = 0;          // 소수의 개수 저장할 변수

    scanf("%d", &input);    // 개수를 입력받음

    for (int i = 0; i < input; i++) {       // 입력받은 개수 만큼 반복
        scanf("%d", &number);   

        for (int j = 2; j <= number; j++) {                     // 2부터 입력받은 수까지
            if (number == j) {                      // 소수인 경우 카운트해줌
                count++;
            }
            if (number % j == 0) {                  // 소수가 아닌경우 반복문 탈출
                break;
            }
        }
    }

    printf("%d", count);
}