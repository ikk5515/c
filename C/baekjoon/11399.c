#include <stdio.h>

int main() {
    int n = 0; 
    int p[1000] = { 0, };
    int input;              // 걸리는 시간을 입력받을 변수
    int temp;               // 정렬할 때 임시저장할 변수
    int result = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &input);
        p[i] = input;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (p[j] > p[j+1]) {                // 현재 요소와 다음 요소의 값을 비교 후 
                temp = p[j];                    // 큰 값을 뒤로 보내기 위해 임시변수에 저장
                p[j] = p[j+1];                  // 작은 값을 앞으로 이동 후
                p[j+1] = temp;                  // 임시변수에 저장해둔 큰 값을 뒤로 이동
            }                  
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            result += p[j];
        }
    }

    printf("%d", result);

    return 0;
}