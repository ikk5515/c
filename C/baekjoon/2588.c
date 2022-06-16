#include <stdio.h>

int main() {
    int op1 = 0, op2 = 0;
    scanf("%d %d", &op1, &op2);

    printf("%d\n", op1 * (op2%10));         // op1 * op2의 1의자리
    printf("%d\n", op1 * ((op2%100)/ 10));  // op1 * op2의 10의자리
    printf("%d\n", op1 * (op2 / 100));      // op1 * op2의 100의자리
    printf("%d\n", op1 * op2);              // op1 * op2

    return 0;
}