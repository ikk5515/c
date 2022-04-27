#include <stdio.h>

int main() {
    int degree = 543;
    int Thai_year;

    scanf("%d", &Thai_year);

    int Kor_year = Thai_year - degree;

    printf("%d", Kor_year);
    return 0;
}