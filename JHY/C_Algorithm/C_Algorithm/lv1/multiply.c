// /와 %의 차이점에 대한 문제
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d\n",a * ((b % 100)%10));
    printf("%d\n",a * ((b % 100)/10));
    printf("%d\n",a * (b / 100));
    printf("%d\n",a * b);
    return 0;
}
