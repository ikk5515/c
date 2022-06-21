#include <stdio.h>

int main() {
    int N = 0;
    int a, b = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }

    return 0;
}