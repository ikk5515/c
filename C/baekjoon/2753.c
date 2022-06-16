#include <stdio.h>

int main()
{
    int leap_year = 0, check = 0;

    scanf("%d", &check);

    if (check % 4 == 0 && check % 100 != 0 || check % 400 == 0)
    {
        leap_year = 1;
        printf("%d", leap_year);
    }
    else
    {
        leap_year = 0;
        printf("%d", leap_year);
    }

    return 0;
}