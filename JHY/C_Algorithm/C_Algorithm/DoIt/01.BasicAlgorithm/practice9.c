#include <stdio.h>

int sum(int a, int b);

int main(void)
{
    int a, b;
    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &a, &b);
    printf("%d\n", sum(a, b));
    return 0;
}

int sum(a , b)
{
    int sum = 0;
    if(a > b)
    {
        for(int i = b; i <= a; i++)
        {
            sum += i;
        }
    } else {
        for(int i = a; i <= b; i++)
        {
            sum += i;
        }
    }
    return sum;
}
