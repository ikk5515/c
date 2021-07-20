#include <stdio.h>
#include <string.h>

int main(){
    char s1[1001]; // 1000자 까지의 문자를 입력받는 배열
    scanf("%[^\n]s", s1);  // 1000자 까지 문자 입력받음
    char *ptr = strtok(s1, " .,"); // ,.  기준으로 the 문자열 자름
    

    int count = 0; // the 문자 개수

    while (ptr != NULL)
    {
        if (ptr != NULL && strcmp(ptr, "the") == 0)    // ptr이 NULL이 아니면서 ptr이 the일 때
            count++;    
        ptr = strtok(NULL, " .,");
    }
    printf("%d", count);
    return 0;
}