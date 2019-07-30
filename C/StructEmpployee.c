#include<stdio.h>
#include<string.h>

struct employee{
    char name[20];
    char Num[20];
    int salary;
};

int main(void){
    struct employee emp;
    
    printf("종업원 이름 입력: ");
    scanf("%s", emp.name);
    printf("주민등록번호 입력: ");
    scanf("%s", emp.Num);
    printf("급여정보 입력: ");
    scanf("%d", &emp.salary);

    printf("이름: %s\n", emp.name);
    printf("주민등록번호: %s\n", emp.Num);
    printf("급여정보: %d\n", emp.salary);

    return 0;
}
