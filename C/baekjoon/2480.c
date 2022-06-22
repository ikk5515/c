//BOJ_2480_주사위_세개
#include <stdio.h>

int main() {
    int a, b, c = 0;
    int result = 0;

        scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c) {
        result = 10000+(a*1000);
    }
    else if (a == b || b == c) {
        result = 1000+(b*100);
    }
    else if (b == c || a == c) {
        result = 1000+(c*100);
    }
    else {
        result = ((a > b) ? ((a>c)? a : c) : ((b > c) ? b : c));
        result *= 100;
    }
    printf("%d", result);
}