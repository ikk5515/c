#include <stdio.h>

//그리디 알고리즘

int main() {
    int input, make_money;      // 동전의 개수와 만들 돈의 액수
    int total_coin[10];         // 동전의 액수를 저장할 배열
    int coin = 0;               // 동전을 입력받을 변수    
    int result = 0;             // 거스름돈의 개수

    scanf("%d %d", &input, &make_money);

    for (int i = input - 1 ; i >= 0; i--) {           // 각각의 동전값을 입력받아 total_coin배열에 넣음
        scanf("%d", &coin);
        total_coin[i] = coin;
    }

    for (int i = 0; i < input; i++) {                  // 최적의 해를 위해 가장 큰 화폐 단위부터 거슬러준다.
        result += make_money/total_coin[i];         // result에 만들 액수를 저장된 동전[i]값으로 나누어 준다.
        make_money %= total_coin[i];                // 만들 액수를 다시 동전[i]의 값으로 나누어준다.
    }

    printf("%d", result);
    
    return 0;
}