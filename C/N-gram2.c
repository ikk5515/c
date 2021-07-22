#include <stdio.h>
#include <string.h>

int main(){
    int number;
    char text[11];

    scanf("%d %s", &number, text);

    int length = strlen(text);

    if(length < number)
    {
        printf("wrong");
        return 0;
    }
    else
    {
        for(int i = 0; i < length - (number - 1); i++){
            for(int j = 0; j < number; j++){
                printf("%c", text[i + j]);
            }
            printf("\n");
        }
        return 0;
    }
    

    return 0;


}