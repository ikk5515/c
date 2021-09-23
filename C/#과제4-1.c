#include <stdio.h>
int main(){
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int k, m, i, *ptr;
    k = m =0;
    ptr = a;
    for(i=0; i<10; i+=2){
        k += *(ptr+i);
        m += *(ptr+i+1);
    }
    printf("***** result *****\n\n");
    printf("(10+30+50+70+90) = %d\n", k);
    printf("(20+40+60+80+100) = %d\n", m);
    return 0;
}
