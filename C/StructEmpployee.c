#include<stdio.h>
#include<string.h>

struct employee{
    char name[20];
    char Num[20];
    int salary;
};

int main(void){
    struct employee emp[3];
    int i;
    
    for(i=0; i<3; i++){
    printf("\n종업원 이름 입력: ");
    scanf("%s", emp[i].name);
    printf("주민등록번호 입력: ");
    scanf("%s", emp[i].Num);
    printf("급여정보 입력: ");
    scanf("%d", &emp[i].salary);
    printf("------------------------------------------");
    }

        for(i=0; i<3; i++){
            printf("\n\n");
            printf("이름: %s\n\n", emp[i].name);
            printf("주민등록번호: %s\n\n", emp[i].Num);
            printf("급여정보: %d\n\n", emp[i].salary);
            printf("-----------------------------------------");
        }

    return 0;
}
