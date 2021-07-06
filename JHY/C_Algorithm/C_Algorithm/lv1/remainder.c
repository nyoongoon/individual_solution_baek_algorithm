// 연산자의 계산순서에 따라 ()를 쓸지말지 결정하기.

#include <stdio.h>

int main(void)
{
    int a ,b ,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", (a + b)%c);
    printf("%d\n", (a % c + b % c)%c);
    printf("%d\n", (a * b)%c);
    printf("%d\n", (a % c * b % c)%c);
    return 0;
}
