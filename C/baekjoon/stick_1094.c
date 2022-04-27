#include <stdio.h>

int main() { 
    int count = 0;
    int x;

    scanf("%d", &x);

    while (x != 0){
        if (x % 2 == 1) {
            count++;
        }
        x /= 2;
    }

    printf("%d", count);
    return 0;
}