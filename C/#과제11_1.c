#include <stdio.h>

int comp(int a, int b, int *sum, int *sub, int *mul, int *div) {
    *sum = a + b;
    *sub = a - b;
    *mul = a * b;
    *div = a / b; 
}
int main(void) {
    int a = 100;
    int b = 50;
    int sum, sub, mul, div;
    comp(a, b, &sum, &sub, &mul, &div);

    printf("합: %d, 차: %d, 곱: %d, 나눗셈 값: %d", sum, sub, mul, div);
    return 0;
}
