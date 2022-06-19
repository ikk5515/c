#include <stdio.h>
#include <string.h>

#define MAX_QUEUE_SIZE 10000
int queue[MAX_QUEUE_SIZE];
int front = -1;
int back = -1;

int isFull_Queue() {
    if (back >= MAX_QUEUE_SIZE - 1) {
        return 1;
    } else { 
        return 0;
    }
}

int show_Size() {                   // queue에 들어있는 정수의 개수 출력
    return back - front;
}

int isEmpty_Queue() {               // queue가 공백인지 확인하는 함수   (비어있으면 1, 아니면 0)
    if (front == back) {
        return 1;
    }else {
        return 0;
    }
}

void push(int item) {               // queue에 원소 삽입
    if (isFull_Queue()) { }
    queue[++back] = item;
}

int pop() {                // queue에 원소 삭제
    if (isEmpty_Queue()) { return -1; }
    return queue[++front];
}

int show_Front() {                          // 제일 처음 원소 반환
    if (isEmpty_Queue()) { return -1; }
    return queue[front+1];
}

int show_Back() {                           // 마지막 원소 반환
    if (isEmpty_Queue()) { return -1;}
    return queue[back];
}

int main() {
    int N;
    scanf ("%d", &N);

    for (int i = 0; i < N; i++) {
        char command[6];
        scanf("%s", command);

        if (!(strcmp (command, "push"))) {
            int ins;
            scanf("%d\n", &ins);
            push(ins);
        }

        else if (!(strcmp (command, "pop"))) {
            printf("%d\n", pop());
        }

        else if (!(strcmp (command, "size"))) {
            printf("%d\n", show_Size());
        }
        
        else if (!(strcmp (command, "empty"))) {
            printf("%d\n", isEmpty_Queue());
        }

        else if (!(strcmp (command, "front"))) {
            printf("%d\n", show_Front());
        }
        else if (!(strcmp (command, "back"))) {
            printf("%d\n", show_Back());
        }
    }
}