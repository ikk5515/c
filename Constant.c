#include<stdio.h>

int main(void) {

    int a[2] , b[2] , c[2], i;
    int x , y , x2 , y2;

    scanf("%d %d", &x , &y);

    for( i = 0 ; i < 2 ; i++ ){

        a[0] = x/100;
        b[0] = (x % 100) / 10;
        c[0] = (x % 100) % 10;

        x2 = (c[0]*100) + (b[0] * 10) + a[0];

        a[1] = y/100;
        b[1] = (y % 100) / 10;
        c[1] = (y % 100) % 10;

        y2 = (c[1]*100) + (b[1] * 10) + a[1];
    }
        if (x2 > y2) {
            printf("%d", x2);
        }
        else{
            printf("%d", y2);
        }
        return 0;
}