#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100      // Stack의 MAX_SIZE를 100으로 선언
int stack[MAX_STACK_SIZE];
int top = -1;

void init_Stack(void) // stack 초기화 함수
{
    top = -1;
}

int isEmpty_Stack() // stack 공백상태 확인 함수
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(int item) // stack에 data를 저장하는 함수
{
    if (top >= MAX_STACK_SIZE - 1) // stack이 가득 찼으면  -1 반환
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

int pop() // stack에 있는 값을 하나 빼는 함수
{
    if (top == -1) // top이 0보다 작으면 stack은 비어있는 상태
    {
        printf("스택이 비었습니다\n"); // 비어있는 안내문 출력 후 -1 반환
        return 0;
    }
    else // 그렇지 않을 경우 stack에 값을 하나 줄임
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
    return (o == '+' || o == '-' || o == '*' || o == '/' || o == '%');
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
    if (opr == '*' || opr == '/' || opr == '%')
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

// 후위표기법 수식이 적절한가 확인해주는 함수
int is_legal(char *symb)
{
    int length = strlen(symb);
    char token, opr;
    for (int i = 0; i < length; i++)
    {
        token = symb[i];
        switch (token)
        {
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
            opr = symb[i + 1]; //연산자 다음에 연산자가 오면 에러발생
            if (opr == '+' || opr == '-' || opr == '*' || opr == '/' || opr == '%')
            {
                printf("연산자를 올바르게 사용 해주세요. \n");
                return -1;
            }
            break;

        case '(':
            push(token); // 괄호가 오면 우선적으로 스택에 push한다.
            break;

        case ')':
            if (top == '\0') // 왼쪽괄호가 안왔는데 오른쪽괄호가 왔을경우 에러발생
            {
                printf("괄호를 올바르게 사용 해주세요. \n");
                return -1;
            }
            else
            {
                if (pop() != '(') // 왼쪽괄호가 있긴 한데 같은 종류가 아니면 에러발생
                {
                    printf("괄호를 올바르게 사용 해주세요. \n");
                    return -1;
                }
            }
            break;
        default:
            if (token < '0' || token > '9') // 0~9 까지와 연산자만 입력받는다.
            {
                printf("올바른 식이 아닙니다. \n");
                return -1;
            }
            else
            {
                return 0;
            }
            break;
        }
    }
    return 0;
}

void infix_to_postfix(char *postfix, char *op) // infix를 postfix로 변환하는 함수
{
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
                *postfix++ = pop();
                *postfix++ = ' ';
            }
            pop();
            op++;
        }
        else if (is_Operator(*op))
        {
            while (!isEmpty_Stack() && priority(stack_Top()) >= priority(*op))
            {
                *postfix++ = pop();
                *postfix++ = ' ';
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
            *postfix++ = ' ';                   // 삽입이 끝났으면, 마지막에 비워준 후 삽입 후 하나 증가시킨다.
        }
        else
        { // 전부 해당이 안될시 다음 수식으로 이동
            break;
            op++;
        }
    }

    while (!isEmpty_Stack())
    { // 변환이 끝나면 stack이 빌 때까지 pop함수를 통해 비우고 Null값 삽입
        *postfix++ = pop();
        *postfix++ = ' ';
    }
    postfix--;
    *postfix = 0;
}

int calc(char *pf) // 후위표기법을 계산하는 함수
{
    int i;
    init_Stack(); // 스택을 초기화

    while (*pf)
    {
        if (*pf >= '0' && *pf <= '9')
        {
            i = 0;
            do
            {
                i = i * 10 + *pf - '0';
                pf++;
            } while (*pf >= '0' && *pf <= '9');
            push(i);
        }
        else if (*pf == '+')
        {
            push(pop() + pop());
            pf++;
        }
        else if (*pf == '*')
        {
            push(pop() * pop());
            pf++;
        }
        else if (*pf == '-')
        {
            i = pop();
            push(pop() - i);
            pf++;
        }
        else if (*pf == '/')
        {
            i = pop();
            push(pop() / i);
            pf++;
        }
        else if (*pf == '%')
        {
            i = pop();
            push(pop() % i);
            pf++;
        }
        else
        {
            pf++;
        }
    }
    return pop();
}

int main(void)
{
    int calc_result;
    char infix[50];
    char postfix[50];
    while (1)
    {
        printf("종료하려면 q(Q)를 누르세요.\n");
        printf("infix >> ");
        scanf("%s", infix);

        if (!strcmp(infix, "q") || !strcmp(infix, "Q"))
        {
            printf("프로그램을 종료합니다. \n");
            break;
        }

        if (is_legal(infix) != -1) // 입력한 연산식이 올바른지 검사
        {
            infix_to_postfix(postfix, infix);
            printf("postfix = %s \n", postfix);

            calc_result = calc(postfix);
            printf("postfix 계산 결과: %d\n\n\n", calc_result);
        }
    }
    return 0;
}