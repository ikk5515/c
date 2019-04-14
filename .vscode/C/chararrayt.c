#include<stdio.h>

int main(){

    char str[]={'G','O','O','D',' ','T','I','M','E'};
    int i;
    
    int arrlen = sizeof(str) / sizeof(char);
   
    for( i = 0; i<arrlen; i++){
    printf("%c", str[i]);
    }
    return 0;
}