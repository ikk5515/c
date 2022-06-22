//BOJ_1152_단어의_개수
#include <stdio.h>
#include <string.h>
#define LEN 1000001

int main() {
    char str[LEN] = { 0 , };        // 크기가 1000001인 char형 배열 선언
    scanf("%[^\n]s", str);                   // 문자열을 입력받음
    char *ptr = strtok(str, " ");       // 공백 문자를 기준으로 문자열을 자른 후 포인터 반환
    int count = 0;                      // 단어의 개수를 세줄 변수 선언

    while (ptr != NULL)
    {   
        count++;                         // 단어의 개수를 세어줌         
        ptr = strtok(NULL, " ");         // 다음 문자열을 잘라서 포인터 반환
    }

    printf("%d", count);
    return 0;
}