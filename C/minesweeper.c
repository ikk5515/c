#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, j;
    int m, n;

    scanf("%d %d", &m,&n);
    char **matrix = malloc(sizeof(char *) * m);  // char형 세로줄 메모리 할당

    for (int i = 0; i < m ; i++){
        matrix[i] = malloc(sizeof(char) * (n + 1));  // char 형 가로 메모리 공간 할당
        memset(matrix[i], 0, sizeof(char) * (n + 1));  // 배열을 0 으로 초기화
    }

    for(i = 0; i < m; i++){
        scanf("%s", matrix[i]); // 한줄씩 문자열 입력 받기
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){  // 가로와 세로줄 모두 검사
            if (matrix[i][j] == '*')
            {
                printf("%c", matrix[i][j]);
                continue;
            }
            else // 요소가 *가 아닐시 주변 8곳을 탐색
            {
                matrix[i][j] = 0;
                for(int x = i - 1; x <= i + 1; x++){
                    for(int y = j - 1; y <= j + 1; y++){
                        if(x < 0|| x >=n || y < 0 || y >= m)
                            continue;
                    
                        else if(matrix[x][y] == '*')
                            matrix[i][j] += 1;
                    }
                }
            printf("%d",matrix[i][j]);
            }
        }
    printf("\n");
    }
    for(int i = 0; i < m; i++){
        free(matrix[i]);  // 가로줄 메모리 해제
    }
    free(matrix); // 세로줄 메모리 해제
return 0;
}
