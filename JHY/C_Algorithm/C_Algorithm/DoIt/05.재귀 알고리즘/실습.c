#include <stdio.h>

#ifndef ___IntStack
#define ___IntStack

typedef struct {
    int max;
    int ptr;
    int *stk;
} IntStack;

int Initialize(IntStack *s, int max);

int main(void)
{
    return 0;
}
