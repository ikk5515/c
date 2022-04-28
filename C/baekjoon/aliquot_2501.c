#include <stdio.h>
#define SUBMULTIPLE 10002

int main() {
    int N, K, buf_cnt = 0, count = 0;
    int arr[SUBMULTIPLE];

    scanf("%d %d", &N, &K);

    for (int i = 1; i <= N; i++) {
        if ((N % i) == 0) {
            arr[buf_cnt++] = i;
            count++;
        }
    }
    
    if (count < K) {
        printf("0\n");
        return 0;
    }
    else {
        printf("%d", arr[K-1]);
        return 0;
    }
}