#include <stdio.h>

int main(void)
{
    int n, i = 0;
    scanf("%d", &n);
    int sum = 99;
    int a = n / 100;
    int b = (n - a * 100) / 10;
    int c = n - a * 100 - b * 10;
    if(n < 100)
    {
        printf("%d\n", b);
    }
    else
    {
        for(int i = 0; i < n - sum + 1; i++)
        {
            if((b - a) == (c - b))
                i++;
        }
        printf("%d\n", i + sum);
    }

    return 0;
}
