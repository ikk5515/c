#include <stdio.h>
#include <string.h>


int main() {
    char str[51];
    scanf("%s", str);

    strcat(str, "??!");
    printf("%s\n", str);
}