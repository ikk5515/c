#include <stdio.h>

int main(){ 
    int *p1, *p2, k=50;
    int a=100, b=200;
    
    p1 = &a;
    p2 = &b;

    k = *p1++;
    printf(" *p1 = %d, *p2 = %d, k = %d\n", *p1, *p2, k);
    
    k = (*p2)++;
    printf(" *p1 = %d, *p2 = %d, k = %d\n", *p1, *p2, k);
}