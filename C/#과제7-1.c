#include <stdio.h>

struct student {
    int number;
    char name[20];
    double height;
};
int main(void) {
    struct student list[3];
    int i;
    for(i = 0; i < 3; i++) {
        printf("학번을 입력하시오: ");
        scanf("%d", &list[i].number);
        printf("이름을 입력하시오: ");
        scanf("%s", list[i].name);
        printf("신장을 입력하시오(실수): ");
        scanf("%lf", &list[i].height);
    }
    for(i = 0; i< 3; i++)
        printf("학번: %d, 이름: %s, 신장: %f\n", list[i].number, list[i].name, list[i].height);
    return 0;
}