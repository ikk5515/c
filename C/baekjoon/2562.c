#include <stdio.h>

int main() {
    int MAX = 0;
    int arr[9] = {0};
    int count = 0;

    for (int i = 1; i < 10; i++) {  // 최대값의 위치를 구해야 하므로 인덱스를 1부터 시작
        scanf("%d", &arr[i]);       // 9개의 수 입력받은 후 배열에 저장
    }
    MAX = arr[0];
    for (int i = 1; i < 10; i++) {  
        if (MAX < arr[i]) {         // 최대값 구하기 이므로 arr[i]보다 MAX가 작으면 arr[i]대입
            MAX = arr[i];
            count = i;
        }
    }

    printf("%d\n%d", MAX, count);
    return 0;
}