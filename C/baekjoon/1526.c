//BOJ_1526_가장_큰_금민수
#include <stdio.h>
#include <stdbool.h>

bool isCheckNum(int num) {          // 4와 7이 틀어가는지 판별하는 메소드
    bool flag = true;

    while (num)
    {
        int checkNum = num % 10;

        if (!(checkNum == 4 || checkNum == 7)) {
            flag = false;
            break;
        }

        num /= 10;
    }
    
    return flag;
}


int main() {
    int N;
    scanf("%d", &N);

    for (int i = N; i >= 1; i--) {      // 입력한 N부터 1씩 감소시키며 4,7이 들어가는 가장 큰 수를 구함
        if (isCheckNum(i)) {
            printf("%d", i);
            break;
        }
    }

    return 0;
}