#include<stdio.h>

typedef struct point{
    int xpos;
    int ypos;
} Point;

/* 이중 구조체 변수 선언 */
typedef struct rectangle{
    Point lu;      //좌 상단  left up  
    Point rd;      //우 하단  right down
} Rectangle;

/* 좌표 입력 */
Rectangle INPUT(void){
    Rectangle rec;

    fputs("좌 상단 x 좌표: ", stdout); scanf("%d", &rec.lu.xpos);
    fputs("좌 상단단 y 좌표: ", stdout); scanf("%d", &rec.lu.ypos);
    fputs("우 하단 x 좌표: ", stdout); scanf("%d", &rec.rd.xpos);
    fputs("우 하단 y 좌표: ", stdout); scanf("%d", &rec.rd.ypos);

    return rec;
}

/* 직사각형의 넓이 연산 함수*/
void  ShowRectWidth(Rectangle rec){
    printf(" 넓이 : %d \n", (rec.rd.xpos - rec.lu.xpos) * (rec.rd.ypos - rec.lu.ypos));      //좌표값의 넓이
}

/* 직사각형의 좌표 출력 함수 */
void ShowRectpoint(Rectangle rec){
    printf(" 좌 상단의 좌표: [%d , %d] \n", rec.lu.xpos, rec.lu.ypos);
    printf(" 좌 하단의 좌표: [%d , %d] \n", rec.lu.xpos, rec.rd.ypos);
    printf(" 우 상단의 좌표: [%d , %d] \n", rec.rd.xpos, rec.lu.ypos);
    printf(" 우 하단의 좌표: [%d , %d] \n", rec.rd.xpos, rec.rd.ypos);
}

int main(void){
    Rectangle rec = INPUT();
    ShowRectpoint(rec);
    fputs("\n",stdout);
    ShowRectWidth(rec);

    return 0;
}