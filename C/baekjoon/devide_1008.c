#include <stdio.h>

int main() {
    int a;
    int b;
    double result;

    scanf("%d %d", &a, &b);

    result = (double) a / (double) b;

    printf("%.9f", result);
}