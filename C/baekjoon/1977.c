#include <stdio.h>

int main() {
    int M, N = 0;
    int total[10001] = { 0, };
    int MIN = 2100000000;
    int sum = 0;
    int count = 0;

    scanf("%d %d", &M, &N);

    for (int i = 1; i <= N; i++) {
        if (i*i >= M && i*i <= N) {
            total[i] = i*i;
            sum += i*i;
            count++;
            if (MIN > total[i]) {
                MIN = total[i];
            }
        }
    }

    if (count == 0) {
        printf("-1");
    } else {
        printf("%d %d", sum, MIN);
    }

    return 0;
}