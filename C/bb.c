#include <stdio.h>

int main (){
    int i, j, h;
    scanf("%d %d", &i, &j);
    for(h = i; i <= j; i++){
        if (i % 55 == 0)
            printf("FizzBuzz\n");
        else if( i % 5 == 0)
            printf("Fizz\n");
        else if ( i % 11 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
    return 0;
}