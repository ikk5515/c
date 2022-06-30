//BOJ_2439_별찍기_2
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n-i; k++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}