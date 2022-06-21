// BOJ_9728_Pair_sum
/*
#include <stdio.h>

int main()
{
    int input = 0; // 입력받을 개수
    int N, M = 0;
    int *saveN[20001] = {
        0,
    };
    int count = 0;

    scanf("%d", &input);    // 개수 입력받음


    for (int i = 0; i < input; i++)
    {
        scanf("%d %d", &N, &M); // 배열의 개수와 총 이루려는 합을 입력받음

        for (int i = 0; i < N; i++) // N만큼 숫자를 입력받음
        {
            scanf("%d", &saveN[i]);
        }

        count = 0;              // 한 번 반복할 때마다 count를 초기화 해줌

        for (int j = 0; j < N/2 ; j++)
        {
            for (int k = 0; k < N-j ; k++)
            {
                if ((saveN[j] + saveN[k]) == M)
                {
                    count++;
                }
            }
        }
        printf("Case #%d: %d\n", i + 1, count);
    }

    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input = 0; // 입력받을 개수
    int N, M = 0;
    int count = 0;
    scanf("%d", &input);    // 개수 입력받음
        
    for (int i = 0; i < input; i++)
    {
        scanf("%d %d", &N, &M); // 배열의 개수와 총 이루려는 합을 입력받음
        int *saveN = malloc(sizeof(int)*N);
        for (int i = 0; i < N; i++) // N만큼 숫자를 입력받음
        {
            scanf("%d", &saveN[i]);
        }

        count = 0;              // 한 번 반복할 때마다 count를 초기화 해줌

        for (int j = 0; j < N/2 ; j++)
        {
            for (int k = 0; k < N-j ; k++)
            {
                if ((saveN[j] + saveN[k]) == M)
                {
                    count++;
                }
            }
        }
        printf("Case #%d: %d\n", i + 1, count);
        free(saveN);
    }

    
    return 0;
}