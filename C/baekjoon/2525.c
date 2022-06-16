#include <stdio.h>

int main()
{
    int hour = 0, minute = 0, count = 0;

    scanf("%d %d %d", &hour, &minute, &count);

    //입력한 count분을 minute에 더해줌
    minute += count;
    while (1)             // minute 값이 60이 넘지 않을 때까지 반복
    {
        if (minute >= 60)
        {                 // 만약 합한 분이 60보다 크면
            minute -= 60; // 분을 60 뺀 후
            hour += 1;    // 시간을 1시간 더해줌
            if (hour > 23)
            { // 만약 23시가 넘어가면 0시로 바꿔줌
                hour = 0;
            }
        }
        else {
            break;
        }
    }

    printf("%d %d", hour, minute);

    return 0;
}