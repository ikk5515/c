#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 0; // 입력받을 값

    scanf("%d,", &size);
    if(size < 2 || size > 10){
        printf("2~10사이까지의 숫자만 입력 가능.\n");
        return 0;
    }
    int ** matrix = malloc(sizeof(int *) * size);
    for(int i = 0; i < size; i++ ){
        matrix[i] = malloc(sizeof(int) * size);
    }
    for (int i = 0; i < size; i++){
        for(int j =0; j < size; j++){
            if( i == j)
                matrix[i][j] = 1;
            else
                matrix[i][j] = 0;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < size; i++){
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}