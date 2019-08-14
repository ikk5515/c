#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define LEN_NAME 20
#define LEN_NUM 20
#define MAXNUM 30

typedef struct phonebook{
    char name [LEN_NAME];
    char num[LEN_NUM];
} Pbook;

void load(Pbook *, int *);
void Insert(Pbook *, int *);
void Save(Pbook *, int);
void Search(Pbook *, int);
void Delete(Pbook *, int *);
void PrintAll(Pbook *, int);

int main(void){
    int sel;
    Pbook perArr[MAXNUM];
    int perNum = 0;

    load(perArr, &perNum);

    while(1){
    puts("*****MENU*****");
    puts("1. Insert ");
    puts("2. Delete ");
    puts("3. Search ");
    puts("4. Print All ");
    puts("5. Exit ");
    fputs("Choose the item: ",stdout);
    scanf("%d", &sel);

    fflush(stdin);
	putchar('\n');


    switch(sel){        // 원하는 항목에 따라 함수 수행
        case 1:
            Insert(perArr, &perNum);
            break;
        case 2:
            Delete(perArr, &perNum);
            break;
        case 3:
            Search(perArr, perNum);
            break;
        case 4:
            PrintAll(perArr, perNum);
            break;
        case 5:
            Save(perArr, perNum);
            break;
        default :
            puts("Input Range 1~5. Try Again.\n");
            break;
        }
    }
	return 0;
}

// 기존 파일 불러오기
void load(Pbook *parr, int *pnum){

    //파일 불러오기
    FILE * fp = fopen("/Users/gim-ingi/testt/phonebook.txt", "rt");

    if(fp == NULL){
        printf("file open error\n");
        return;
    }
    while(1){
        if(feof(fp)!=0){
            break;
        }
        fscanf(fp, "%s %s", parr[*pnum].name, parr[*pnum].num);
    (*pnum)++;
    }
    fclose(fp);
}

// 정보 입력 함수
void Insert(Pbook *parr, int *pnum){
    char tempname[LEN_NAME],tempnum[LEN_NUM];

    puts("[ INSERT ]");
    printf("Input Name : "); scanf("%s", tempname);
	printf("Input Tel Number : "); scanf("%s", tempnum);

    strcpy(parr[*pnum].name, tempname);
	strcpy(parr[*pnum].num, tempnum);

	(*pnum)++;

    printf("             Data Inserted \n");
    return;
}

// 파일 저장 함수
void Save(Pbook *parr, int num){
    char tempname[LEN_NAME], tempnum[LEN_NUM];
    int i;

    // 파일이 없을경우 생성
    FILE *fp =fopen("/Users/gim-ingi/testt/phonebook.txt", "wt");

    for(i=0; i<num; i++){
        fputs(parr[i].name,fp);
        fputs(parr[i].num,fp);
    }
    printf("Save Complete!\n");

    fclose(fp);
}

// 파일 검색 함수
void Search(Pbook *parr, int num){
    char tempname[LEN_NAME];
    int i;

    if(num == 0)
        puts("-------->  Data Not Found");            // 기존에 등록된 사람이 없을 경우 에러 메시지 표시
		return;
    puts("[ SEARCH ]");
    fputs("Input Name You Want to Search: ", stdout);
	scanf("%s", tempname);
	fflush(stdin);
	putchar('\n');

    for(i=0; i<num; i++){
        if(strcmp(parr[i].name,tempname)==0){
            puts("***Search Result***");
            printf("Name: %s/Tel: %s",parr[i].name,parr[i].num);
            return;
        }
    }
    puts("There is no one who has that name.");
    return;
}

// 정보 삭제 함수
void Delete(Pbook *parr, int *pnum){
    char tempname[LEN_NAME];
    int i,j;

    if(*pnum == 0)
        puts("There is no one. You can't delete anyone.");          // 기존에 등록된 사람이 없을 경우 에러 메시지 표시
		return;
    puts("[ DELETE ]");
    fputs("Input Name for Removing: ", stdout);
    scanf("%s", tempname);
    fflush(stdin);

    for(i=0; i<*pnum; i++){
        if(strcmp(parr[i].name,tempname)==0){
            for(j=i+1; j<*pnum; j++){
                strcpy(parr[j-1].name, parr[j].name);
                strcpy(parr[j-1].num, parr[j].num);
            }
            (*pnum)--;
            printf("-----> %s Deleted", tempname);
            return;
        }
    }
    puts("There is no one who has that name.");
}

// 전체 정보 출력 함수
void PrintAll(Pbook *parr, int num){
    int i;
    if(num == 0){
        printf("There is no one to show.\n");
        return;
    }
    printf("[ PRINT ALL DATA ]\n");
    for(i=0; i<num; i++){
        printf("Name: %s    /    Tel: %s \n", parr[i].name, parr[i].num);
    }
    return;
}