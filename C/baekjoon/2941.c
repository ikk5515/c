// BOJ_2941_크로아티아_알파벳
#include <stdio.h>
#include <string.h>

int main()
{
    char arr[101] = {
        0,
    };                // 알파벳을 입력받을 배열
    scanf("%s", arr); // 입력
    int length = strlen(arr);
    int len = strlen(arr); // 알파벳의 길이를 세줄 변수 len의 초기값 = 문자열의 길이

    for (int i = 0; i < length; i++)
    { // 반복문을 통해 크로아티아 알파벳이 나오면 len을 감소시켜줌
        if (((arr[i] == 'l') || (arr[i] == 'n')) && (arr[i + 1] == 'j'))
        {
            len--;
        }
        if ((arr[i] == 'd') && (arr[i + 1] == 'z') && (arr[i + 2] == '='))
        {
            len--;
        }
        if ((arr[i] == '=') || (arr[i] == '-'))
        {
            len--;
        }
    }
    printf("%d", len);
    return 0;
}