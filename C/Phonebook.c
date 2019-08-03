#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int total = 0;

typedef struct person{
    char name[30];
    char phoneN[20];
} Person[100];

// 기존 파일 불러오기
void load(){
    char temp[30];

    //파일 불러오기
    FILE * fp = fopen("/Users/gim-ingi/testt/phonebook.txt", "rt");

    if(fp == NULL){
        printf("file open error");
        return -1;
    }
    while(1){
        if(feof(fp)!=0){
            break;
        }
    fgets(temp, sizeof(temp), fp);            // 첫째줄 읽음
    strcpy(Person[total].name, temp);       // 저장
    fgets(temp,sizeof(temp), fp);           // 두번째줄 읽음
    strcpy(Person[total].phoneN, temp);        // 저장
    total++;
    }
    total--;                // 마지막 \n 삭제
    fclose(fp);
}

// 정보 입력 함수
void Insert(){

}

// 파일 저장 함수
void Save(){
    char temp[30];
    int i;

    // 파일이 없을경우 생성
    FILE *fp =fopen("/Users/gim-ingi/testt/phonebook.txt", "wt");
    fclose(fp);

    for(i=0; i<total; i++){
        fputs(Person[i].name)
        fputs("")
    }

}

// 파일 검색 함수
void Search(){

}

// 정보 삭제 함수
void Delete(){

}

int main(void){
    load();
    int select;

    printf("*****MENU*****\n");
    printf("1. Insert \n");
    printf("2. Delete \n");
    printf("3. Search \n");
    printf("4. Print All \n");
    printf("5. Exit \n");
    printf("Choose the item: ");
    scanf("%d", &select);

}