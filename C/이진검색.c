#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n;
    int arrNum[10] = {5,20,48,67,99,125,234,563,784,859};
    int top = 0;
    int bottom = 9;
    int mid = 0;
    scanf("%d", &n);
    while (top>bottom){
        mid = (top+bottom)/2;
        if (n == arrNum[mid]) {
            printf("%d은(는) %d번째에 있습니다.", n, arrNum[mid]);
            exit(0);
        }
        if(n > arrNum[mid]){
            top = mid + 1;
        }
        else {
            bottom = mid - 1;
        }  
    }
    return 0;
}