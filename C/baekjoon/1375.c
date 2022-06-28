// BOJ_1357_뒤집힌_덧셈
#include <stdio.h>

int main() {
    int a, b = 0;
    int result_A = 0;       // 입력받은 첫번째 수의 역순 (100의자리 수)
    int result_B = 0;       // 입력받은 두번째 수의 역순 (100의자리 수)
    
    int result, answer = 0;         // 두 역순의 합과 결과

    scanf("%d %d", &a, &b);

    while (a)
    {
        result_A = (result_A * 10) + (a % 10);
        a /= 10;
    }
    while (b)
    {
        result_B = (result_B * 10) + (b % 10);
        b /= 10;
    }

    result = result_A + result_B;       // Rev(X) + Rev(Y)

    while (result)                      // Rev(Rev(X) + Rev(Y))
    {
        answer = (answer * 10) + (result % 10);
        result /= 10;
    }
    
    printf("%d", answer);

    return 0;
}