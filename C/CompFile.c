#include<stdio.h>

int main(void){
    int acount =0, pcount = 0;
    int ch =0;
    char word[100];

    FILE *fp = fopen ("/Users/gim-ingi/testt/word.txt", "rt");
    if(fp == NULL){
        printf("파일 오픈 실패! 종료합니다.\n");
        return -1;
    }

    while((ch = fgetc(fp)) != EOF){
        fscanf(fp, "%s", word);
        if (word[0] == 'A' || word[0] == 'a'){
            acount++;
        }
        else if(word[0] == 'P' || word[0] =='p'){
            pcount++;
        }
    }
    printf("A로 시작하는 단어의 수: %d \n", acount);
    printf("P로 시작하는 단어의 수: %d \n", pcount);

    fclose(fp);
    return 0;
}