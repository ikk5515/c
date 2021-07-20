#include <stdio.h>
#include <string.h>

int main(){
    
    char s1[61];
    scanf ("%s", s1);
    char *ptr = strtok(s1, ".");

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, ".");

    }
    return 0;

}