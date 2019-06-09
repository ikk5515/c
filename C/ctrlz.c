#include<stdio.h>
void count();
int main(){
    int c;
    while((c=getchar()) != EOF)
    if ('0'<=c && c <='9')
        count();
}
void count(){
    static int num = 0;
    printf("numeric = %d \n", ++num);
}