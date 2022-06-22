//BOJ_1100_하얀_칸
#include <stdio.h>

int main() {
    char str[9][9];
    int count = 0;
    
    for (int i = 0; i < 8; i++) {
        scanf("%s", str[i]);
    }

    for (int i = 0; i < 8; i++) {        
        for (int j = 0; j < 8; j++)
        {
            if (str[i][j] == 'F' && (i+j) % 2 == 0)
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}