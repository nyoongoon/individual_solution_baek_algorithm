/*
 push X: 정수 X를 스택에 넣는 연산이다.
 pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 size: 스택에 들어있는 정수의 개수를 출력한다.
 empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
 top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 */

/*
 1. 스택 만들기 (typedef.)
 2. 스택 배열 초기화
 3.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define num_max 10000

/*---스택을 구현하는 구조체---*/
typedef struct {
    int max; // 스택의 최대 용량
    int ptr; // 스택에 쌓여있는 데이터의 개수를 나타내는 멤버
    int *stk; // 스택에 푸시된 데이터를 저장할 용도로 배열을 가리키는 포인터
} IntStack;

int Initialize(IntStack *s)
{
    s -> ptr = 0;
    if((s -> stk = calloc(num_max, sizeof(int))) == NULL) {
        s -> max = 0;
        return -1;
    }
    s -> max = num_max;
    return 0;
}

int push(IntStack *s, int x)
{
    if(s -> ptr >= s -> max)
        return -1;
    s -> stk[s->ptr++] = x;
    return 0;
}

int pop(IntStack *s, int *x)
{
    if(s -> ptr <= 0)
    {
        printf("-1\n");
        return 0;
    }
    printf("%d\n", s -> stk[s -> ptr - 1]);
    *x = s -> stk[s->ptr--];
    return 0;
}

int size(IntStack *s)
{
    printf("%d\n", s->ptr);
    return 0;
}

int empty(IntStack *s)
{
    if(s -> ptr <= 0)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}

int top(IntStack *s)
{
    if(s -> ptr <=0)
    {
        printf("-1\n");
        return 0;
    }
    printf("%d\n", s -> stk[s -> ptr - 1]);
    return 0;
}

int main(void)
{
    IntStack s;
    Initialize(&s);
    char order[10];
    int x = 0;
    int n = 0;
    int k = 0;
    scanf("%d", &n);
    while (1) {
        if(n <= 0)
            break;
        scanf("%s", &order);
        
        if(!strcmp(order, "push"))
        {
            scanf("%d", &x);
            push(&s, x);
        } else if(!strcmp(order, "pop"))
        {
            pop(&s,&x);
        } else if(!strcmp(order, "size"))
        {
            size(&s);
        } else if(!strcmp(order, "empty"))
        {
            empty(&s);
        } else if(!strcmp(order, "top"))
        {
            top(&s);
        }
        n--;
    }
    return 0;
}
