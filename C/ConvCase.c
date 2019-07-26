#include<stdio.h>

int ConvCase(int ch){
    int diff='a'-'A'; //모든 문자의 대소문자간의 차이는 같음
    if(ch>='A' && ch<='Z')
        return ch+diff;
    else if(ch>='a' && ch<='z')
        return ch-diff;
    else
        return -1;
}
int main(void){
    int ch;
    printf("알파벳 입력: ");
    ch=getchar(); //문자 입력
    ch=ConvCase(ch); //문자 변환

    if(ch==-1){
        puts("범위를 벗어난 입력입니다. \n");
        return -1;
    }
    putchar(ch);
    return 0;
}