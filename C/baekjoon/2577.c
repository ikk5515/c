#include <stdio.h>

int main() {
    int op1 = 0, op2 = 0, op3 = 0;
    int arr[10] = {0, };
    int sum = 0;
    int sum_1 = 0;

    scanf("%d %d %d", &op1, &op2, &op3);    // 값 3개를 입력해서 곱한 후 sum에 저장
    sum = op1 * op2 * op3;

    while (sum > 0)
    {
        sum_1 = sum % 10;           // 10으로 나누었을 때 나머지이므로, 1의자리 숫자를 각각 구해줌
        arr[sum_1]++;                   // 각각 나온 1의자리 숫자 인덱스의 값을 하나 증가시켜줌
        sum /= 10;
    }

    for (int i = 0; i <= 9; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
    
}