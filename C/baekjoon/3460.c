//BOJ_3460_이진수
#include <stdio.h>

int main() {
    int n, input;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int count = 0;

        scanf("%d", &input);
        
        while (input != 0)          // 2진수로 변환 
        {
            if (input % 2 == 1) {   // 1의 위치 출력
                printf("%d ", count);
            }
            input /= 2;
            count++;
        }
        printf("\n");
    }
    return 0;
}