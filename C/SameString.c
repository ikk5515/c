#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int GetSapceIdx(char str[]){
    int len, i;
    len = strlen(str);  //문자열의 길이
    for(i=0; i<len; i++){
        if(str[i] == ' '){  
            return i;
        }
    }
    return -1;        //공백문자가 존재하지 않을 경우에 반환한다.
}

int CompName(char str1[], char str2[]){    //이름 비교
    int Idx1=GetSapceIdx(str1);
    int Idx2=GetSapceIdx(str2);

    if(Idx1 != Idx2){ //이름과 길이가 다르면 서로 다른이름
        return 0;
    }
    else{             //이름과 길이가 같으면 서로 같은이름
        return !strncmp(str1, str2, Idx1);     //0이 반환되면 동일한 문자열, 0이 아닌 값이 반환되면 동일하지 않은 문자열
    }
}

int CompAge(char str1[], char str2[]){   //나이 비교
    int Idx1 = GetSapceIdx(str1);
    int Idx2 = GetSapceIdx(str2);
    int age1, age2;

    age1 = atoi(&str1[Idx1+1]);   //str1[Idx+1]이 나이가 저장된 위치
    age2 = atoi(&str2[Idx2+1]);   //str2[Idx+1]이 나이가 저장된 위치

    if(age1==age2){     //나이가 같을경우
        return 1;
    }
    else{              //나이가 다를경우
        return 0;
    }
}

int main(void){
    char str1[20];
    char str2[20];

    printf("첫번째 사람의 정보 입력: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1)-1] = 0;            // \n 문자 삭제

    printf("두번째 사람의 정보 입력: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2)-1] = 0;           // \n 문자 삭제

    if(CompName(str1, str2))        //이름 비교
        puts("\n이름이 동일합니다.");
    else
        puts("\n이름이 동일하지 않습니다.");


    if(CompAge(str1, str2))        //나이 비교
        puts("나이가 같습니다.");
    else
        puts("나이가 같지 않습니다.");
    
    return 0;
}