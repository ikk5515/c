#include<stdio.h>
int fibonacci(int n);

int main(){
    int i , n;

    scanf("%d", &n);

    for( i = 0; i < n; i++){
        printf("%d ", fibonacci(i));
    }
    return 0;
    }

int fibonacci(int n){
    if (n == 1) {
        return 1;
    }
    else
        if (n == 0) {
            return 0;
        }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
}