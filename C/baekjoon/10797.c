// BOJ_10797_10부제
#include <stdio.h>

int main() {
    int n, a, cnt = 0;

    scanf("%d", &n);

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a);
        if (a == n) {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}