// BOJ_10886_0=not_cute/1=cute
#include <stdio.h>

int main() {
    int n,a,sum =0;

    scanf("%d", &n);

    for (int i = 0 ; i < n; i++) {
        scanf("%d", &a);
        if (a == 1 ) {
            sum++;
        } else {
            sum--;
        }    
    }
    if (sum > 0) {
        printf("Junhee is cute!");
    }else {
        printf("Junhee is not cute!");
    }

    return 0;
}