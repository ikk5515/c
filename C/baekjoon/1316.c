// BOJ_1316_그룹_단어_체커
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int N;             // 단어 N개를 입력할 수
    int group_num = 0; // 그룹 단어의 개수를 저장할 변수

    scanf("%d", &N); // N만큼 단어를 입력받음
    for (int i = 0; i < N; i++)
    {
        bool flag = true; // 그룹 단어인지 판별
        char arr[101] = {
            0,
        }; // 입력한 문자를 저장할 배열
        scanf("%s", arr);

        int len = strlen(arr);

        for (int j = 0; j < len; j++)
        {

            for (int k = j + 1; k < len; k++)
            {
                if (arr[j] == arr[k])
                {
                    if (arr[k - 1] != arr[k])
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (flag == true)
        {
            group_num++;
        }
    }
    printf("%d", group_num);
    return 0;
}