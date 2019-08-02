#include<stdio.h>
#define ADD(x,y,z) ((x)+(y)+(z))
#define MUL(x,y,z) ((x)*(y)*(z))

int main(void){
    printf("5 + 6 + 7 = %d\n", ADD(5,6,7));
    printf("5 * 6 * 7 = %d\n", MUL(5,6,7));
    return 0;
}