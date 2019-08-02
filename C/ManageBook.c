#include<stdio.h>
#include<stdlib.h>

void clearBuffer(void){
    while(getchar() != '\n');
}

typedef struct manage{
    char name[20];
    char author[20];
    int page;
} Manage;

int main(void){
    Manage *book[3];           //구조체 포인터 배열 선언
    int i;
    printf("\n도서 정보 입력 ");
    for(i=0 ; i<3 ; i++){
        Manage *pbook = ((Manage *)malloc(sizeof(Manage)));            // 메모리 동적 할당
    
        puts("\n");             //줄바꿈
        fputs("저자: ",stdout);
        fgets((*pbook).author, sizeof((*pbook).author), stdin);
        fputs("제목: ",stdout);
        fgets((*pbook).name, sizeof((*pbook).name), stdin);
        fputs("페이지 수: ",stdout);
        scanf("%d", &((*pbook).page));
        clearBuffer();

        book[i] = pbook;
    }

    fputs("\n\n\n도서 정보 출력\n", stdout);
    for(i=0 ; i<3 ; i++){
        printf("\nbook %d\n", i+1);
        printf("저자 %s", book[i]->author);
        printf("제목 %s", book[i]->name);
        printf("페이지 수 %d", book[i]->page);
    }
    for(i=0; i<3; i++){
        free(book[i]);
        return 0;
    }
}