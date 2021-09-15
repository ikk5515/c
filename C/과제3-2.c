#include <stdio.h>
int main(){
    int a = 10, b = 20, c = 30;
    int *p=&a;

    printf("a = %d, b = %d, c = %d\n", a, b, c); printf("&a = %p, &b = %p, &c = %p\n", &a, &b, &c); printf("p = %p\n", p);
    printf("*(p+2) = %d\n", *(p+2));
    printf("*p+2 = %d\n", *p+2);
    
    return 0;
}