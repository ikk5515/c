#include <stdio.h>

int main() {
    int hour = 0, minute = 0;
    int stay = 0;

    scanf("%d %d", &hour, &minute);

    // 만약 분이 45분보다 적게 남았다면
    if (minute < 45) {          
        hour -= 1;              // 현재 시간 -1
        if (hour < 0) {         // 만약 시간이 0보다 작아질 때
            hour = 23;          // 시간을 23으로 재설정
        }
        stay = 45 - minute;     // 현재 입력한 시간이 45보다 작으므로 임시값에 45에서 현재 분을 뺀 값을 저장해둠
        minute = 60 - stay;     // 60에서 저장한 값을 뺀 후 다시 minute에 저장함
    }
    else {                      // 아닐경우 minute이 45보다 크므로 그냥 뺴준 후 출력
        minute -= 45;
    }

    printf("%d %d", hour, minute);

    return 0;

}