#include<stdio.h>
#include<string.h>

void palinFunc(char*arr, int len){
    int i;
    int j=len-1;
    
    for (i=0; i<len/2; i++){
    if(arr[i]!=arr[j]){
        printf("%s은(는) 화문이 아닙니다! \n", arr);
        return;
        }
        j--;
    }
    printf("%s은(는) 화문입니다. \n", arr);
    return;
}
int main(void){
    printf("문자열 입력: ");
    char ary[] ="";
    scanf("%s", ary);
    int aryLen;
    aryLen = strlen(ary);

    palinFunc(ary, aryLen);
    return 0;  
}