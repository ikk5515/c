#include <stdio.h>
#include <string.h>

int main (){
    char s1[31];
    char s2[31];

    scanf("%s %s", s1, s2);

    int ret = strcmp(s1, s2);

    if (ret == 0){
        printf("%d", ret);
    }
    else if(ret > 0){
        printf("%d", ret);
    }
    else if(ret < 0){
        printf("%d", ret);
    }

    return 0;
    
}