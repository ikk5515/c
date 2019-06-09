#include<stdio.h>
int a; //전역변수
int main(){
    void sub();          //함수원형
    int i;               //자동변수
    i = a = i;
    printf("main : a = %d, i = %d \n", a, i);
    sub();
        printf("main: a = %d, i = %d \n", a, i);
}
void sub()
{
    int i;               //자둥변수
    i = a = 2;
    printf("sub : a = %d, i = %d \n", a, i);
}
