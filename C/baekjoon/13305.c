#include <stdio.h>

// 그리디 알고리즘
int main() {
    int city = 0;
    int distance[1000001] = { 0, };            // 도시마다 이동 거리를 저장할 배열 초기화
    int min = 0;                           // 최저가를 저장할 변수
    int now = 0;                            // 현재 주유소 가격을 입력받을 변수 
    long long price = 0;                          // 비용을 저장할 변수

    scanf("%d", &city);                     // N개의 도시 개수를 입력받음

    for (int i = 0; i < city-1; i++) {      // 입력한 도시 개수 - 1 만큼 거리를 입력받아 배열에 삽입
        scanf("%d", &distance[i]);
    }

    for (int i = 0; i < city; i++) {      // 주유소 가격을 입력받음
        scanf("%d", &now);
        if ( i == 0 || min > now) {         // 만약 처음 이동하거나, 다음 주유소 가격이 전보다 싸다면
            min = now;                      // 최저가를 지금 입력한 가격으로 지정
        }
        price += (long long)min * distance[i];         // price변수에 이동거리와 주유가격을 곱한 값을 더해줌
    }

    printf("%lld", price);

    return 0;
}