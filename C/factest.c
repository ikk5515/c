#include<stdio.h>
int main() {
    int n, result=1;
    for(n=1; n<=10; n++)
        result = result * n;
    printf("10! = %d", result);
}