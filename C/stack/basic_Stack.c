#include <stdio.h>
#include <string.h>

#define MAX_STACK_SIZE 100000
int STACK_SIZE = MAX_STACK_SIZE;
int stack [MAX_STACK_SIZE];
int top = -1;


int isFull_Stack() {
    if (top >= MAX_STACK_SIZE -1) {
        return 1;
    }
    else {
        return 0;
    }
}

int isEmpty_Stack() {
    if (top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

void push(int item) {
    if (isFull_Stack()) {
        printf("Stack Overflow \n");
    }
    stack[++top] = item;
}

int pop() {
    if (top == -1) {
        printf("Stack is Empty\n");
        return -1;
    }
    return stack[top--];

}

int show_Size() {
    return top +1;
}

int show_Top() {
    if (top == -1) {
        return -1;
    }
    return stack[top];
}


int main(void) {
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
        
        else if (!(strcmp (command, "top"))) {
            printf("%d\n", show_Top());
        }

        else if (!(strcmp (command, "empty"))) {
            printf("%d", isEmpty_Stack());
        }
    }
}