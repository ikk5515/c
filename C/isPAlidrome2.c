#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char word[31];               // 단어를 저장할 배열
    int length;                  // 문자열 길이
    bool isPalindrome = true;    // 회문 판별값을 저장할 변수, 초깃값은 true

    scanf("%[^\n]s", word);

    length = strlen(word);    // 문자열의 길이를 구함

    int begin = 0;
    int end = length - 1;

    while (begin < end)
    {
        if (word[begin] == ' ')  // 앞 부분에 공백이 있을시 건너 뜀
        {
            begin++;
            continue;
        }
        else if (word[end] == ' ') // 뒷 부분에 공백이 있을시 건너 뜀
        {
            end--;
            continue;
        }
        
        if (word[begin] != word[end])
        {
            isPalindrome = false;
            break;
        }
        // 앞은 한칸씪 뒤로, 뒤는 한칸씩 앞으로
        begin++; 
        end--;
    }
    

    printf("%d\n", isPalindrome);    // 회문 판별값 출력

    return 0;
}