#include <stdio.h>

int main(void)
{
    int n = 7;
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
