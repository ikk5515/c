#include <stdio.h>

struct student { 
    int number;
    char name[10];
    double height;
    struct student *next;
};

void insert1 (char val) {

}


int main(void) {
    struct student s1 = { 30, "Kim", 167.2, NULL };
    struct student s2 = { 31, "Park", 179.1, NULL };
    struct student s3 = { 32, "Lee", 172.3, NULL };
    struct student s4 = { 33, "Choi", 175.6, NULL };
    struct student s5 = { 34, "Song", 170.8, NULL };
    struct student s6 = { 35, "Lim", 160.4, NULL };
    
    struct student *first = NULL;
    struct student *current = NULL;

    first = &s1; 
    s1.next = &s2;
    s2.next = &s6;
    s6.next = &s3;
    s3.next = &s4;
    s4.next = &s5;
    s5.next = NULL;

    current = first;
    while( current != NULL ) {
    printf("학생의 번호=%d 이름=%s, 키=%f\n", current->number, current->name, current->height);
    current=current->next; 
    }
}