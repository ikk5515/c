#include <stdio.h>
#include <string.h>

#define MAX_STACK_SIZE 100
int stack[MAX_STACK_SIZE];
int top = -1;

void init_Stack(void) // stack 초기화 함수
{
    top = -1;
}
/*
int isFull_Stack() // stack 포화상태 확인 함수
{
    if (top >= MAX_STACK_SIZE - 1) // 만약 stack이 가득 찬 경우
    {
        printf("stack이 가득 찼습니다.\n 프로그램을 종료합니다.");
        return -1; // stack이 가득 찬 경우, 문구 출력 후 0을 반환
    }
    else // 그렇지 않을 경우 1 반환
    {
        return 1;
    }
}
*/

int isEmpty_Stack(void) // stack 공백상태 확인 함수
{
    return (top <0);
}

int push(int item) // stack에 data를 저장하는 함수
{
    if (top >= MAX_STACK_SIZE -1) // stack이 가득 찼으면  -1 반환
    {
        printf("스택이 가득 찼습니다.\n");
        return -1;
    }
    else
    { // 아닐 경우 top을 하나 증가시킨 후 item 삽입
        stack[++top] = item;
        return item;
    }
}

int pop(void) // stack에 있는 값을 하나 빼는 함수
{
    if (top < 0)                // top이 0보다 작으면 stack은 비어있는 상태
    {
        printf("스택이 비었습니다\n");      // 비어있는 안내문 출력 후 -1 반환
        return -1;
    }
    else                        // 그렇지 않을 경우 stack에 값을 하나 줄임
    {
        return stack[top--];
    }
}

int stack_Top()
{ // stack에서 top값(최상단 값)을 가져오는 함수
    if (top == -1)
    {
        return -1;
    }
    return stack[top];
}

int is_Operator(int o)
{ // 연산자인지 판단하는 함수
    return (o == '+' || o == '-' || o == '*' || o == '/');
}

int priority(int opr)
{ // 연산자의 우선순위를 지정해주는 함수 (우선순위를 수치로 지정)
    if (opr == '(')
    {
        return 0;
    }
    if (opr == '+' || opr == '-')
    {
        return 1;
    }
    if (opr == '*' || opr == '/')
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

void infix_to_postfix(char *postfix, char *op) // infix를 postfix로 변환하는 함수
{
    char c;       // 문자형 c를 선언
    init_Stack(); // Stack 초기화

    while (*op)
    {
        if (*op == '(') // 수식에 '('가 들어올 때
        {
            push(*op); // 괄호를 push 해 stack에 삽입
            op++;      // 그런 다음 수식을 하나 증가
        }
        else if (*op == ')')
        {                              // 수식에 닫는 괄호가 들어올 때 (stack에 이미 '('가 들어가 있는 상태이다.)
            while (stack_Top() != '(') // 다시 '('가 들어오기 전까지
            {
                *postfix++ = pop(); //
                *postfix++ = '\0';  //
            }
            pop(); //
            op++;  //
        }
        else if (is_Operator(*op))
        {
            while (!isEmpty_Stack() && priority(stack_Top()) >= priority(*op))
            {
                *postfix++ = pop();
                *postfix++ = '\0';
            }
            push(*op);
            op++;
        }
        else if (*op >= '0' && *op <= '9')
        { // 입력받은 연산식의 값이 0 이상이거나 9 이하일 때
            do
            {
                *postfix++ = *op++;             // postfix에 op를 대입 후 둘 다 하나씩 증가시킨다.
            } while (*op >= '0' && *op <= '9'); // op(연산식)이 0 이상이고 9이하일 때까지
            *postfix++ = '\0';                  // 삽입이 끝났으면, 마지막에 Null값 삽입 후 하나 증가시킨다.
        }
        else
        { // 전부 해당이 안될시 다음 수식으로 이동
            op++;
        }
    }

    while (!isEmpty_Stack())
    { // 변환이 끝나면 stack이 빌 때까지 pop함수를 통해 비우고 Null값 삽입
        *postfix++ = pop();
        *postfix++ = '\0';
    }
    postfix--;
    *postfix = 0;
}

int main(void)
{
    int calc_result;
    char input;
    char exp[100] = "2*3+6/2-4";
    char postfix[100];

    /*printf(">> ");
    for (int i = 0;; i++) {
        strcpy(exp[i]++, getc(stdin));
        
        if (getc(stdin) == '\n') {
        break;
        }
    }

    */
    infix_to_postfix(postfix, exp);
    printf("postifix = %s", postfix);
}