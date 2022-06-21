// BOJ_1193_분수찾기
#include <stdio.h>

int main() {
    int n = 0;
    int x = 1;

    scanf("%d", &n);

    if (n == 1) {
        printf("1/1\n");
        return 0;
    }

    while (n-x > 0)       // 입력받은 수에서 1 2 3 4 5 ~ 차례로 빼줌 (몇번째 대각선에 있는지 구하기 위해)
    {
        n -= x;
        x++;
    }
    x++;
    if ((x-1) % 2 == 1) {            // 홀수
        printf("%d/%d", x-n, n);     // 분모 / 분자
    }
    else {                            // 짝수
        printf("%d/%d", n, x-n);     // 분자 / 분모
    }
    return 0;
    
}