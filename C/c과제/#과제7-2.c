#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};
struct student {
    int number;
    char name[20];
    double height;
    struct date *dob;
};
int main(void) {
    struct date d = { 3, 20, 1980 };
    struct student s = { 20070001, "Kim", 180.2 };
    s.dob = &d;
    printf("학번: %d\n", s.number);
    printf("이름: %s\n", s.name);
    printf("신장: %f\n", s.height);
    printf("생년월일: %d년 %d월 %d일\n", s.dob->year, s.dob->month, s.dob->day);
    return 0;
}