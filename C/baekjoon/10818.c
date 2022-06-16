#include <stdio.h>

int main() {
    int count = 0, MAX, MIN;
    int arr[1000001] = {0};
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        scanf ("%d", &arr[i]);
    }
    MAX = arr[0];
    MIN = arr[0];
    for (int i = 0; i < count; i++) {
        if (MAX < arr[i]) {             // MAX값이 arr[i]번쨰 값보다 작으면 arr[i]값을 대입
            MAX = arr[i];
        }
        if (MIN > arr[i]) {           // MIN값이 arr[i]번쨰 값보다 크면 arr[i]값을 대입
            MIN = arr[i];
        }
    }
    printf("%d %d", MIN, MAX);

    return 0;
}