#include<stdio.h>

void Display(char (*x)[10], int y, char *msg){
    puts(msg);
    for(int i =  0; i < y; i++){
        printf("dept[%d] ==> %s \n", i, *(x+i));
    }
}
int main() {
    char dept[5][10] = {"컴공", "기계", "전기", "전자", "건축"};
    int i, n = sizeof(dept) / sizeof(char[10]);
    puts("< 배열 포인터의 사용 예 >");
    printf("\n %d개의 학과 \n", n);
    Display(dept, n, "*함수에서 출력*");
    return 0;
}