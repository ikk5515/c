#include<stdio.h>

int main(void){
    char ch, dh;

    FILE * ttxt1 = fopen("/Users/gim-ingi/testt/word.txt", "rt");
    FILE * ttxt2 = fopen("/Users/gim-ingi/testt/word2.txt", "rt");

    if(ttxt1 == NULL || ttxt2 == NULL){
        printf("파일 오픈 실패! 종료합니다.\n");
        return -1;
    }
    while(1){
        ch = fgetc(ttxt1);
        dh = fgetc(ttxt2);

        if(ch != dh){
            printf("두 개의 파일은 일치하지 않습니다.\n");
            break;
        }
        else if(ch == EOF && dh == EOF){
            printf("두 개의 파일은 완전히 일치 합니다.\n");
            break;
        }
    }
        fclose(ttxt1);
        fclose(ttxt2);
        return 0;
}