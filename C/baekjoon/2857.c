// BOJ_2857_FBI
#include <stdio.h>
#include <string.h>

int main() {
    char job[100] = { 0, };
    int count = 0;
    for (int i = 1; i <= 5; i++) {
        scanf("%s", &job[i]);
        if (strstr(&job[i], "FBI") != NULL) {
            printf("%d\n", i);
            count++;
        }
    }
    if (count == 0) {
        printf("HE GOT AWAY!");
    }
    return 0;
}