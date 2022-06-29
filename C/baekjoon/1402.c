//BOJ_1402_아무래도이문제는A번난이도인것같다
#include <stdio.h>

int main(){ 
    int input = 0;
    int a, b = 0;

    scanf("%d", &input);

    for (int i = 0; i < input; i++) {   // 모든 A'의 1을 곱해서 A'를 만들 수 있으므로
        scanf("%d %d", &a, &b);
        printf("yes\n");
    }

    return 0;
}