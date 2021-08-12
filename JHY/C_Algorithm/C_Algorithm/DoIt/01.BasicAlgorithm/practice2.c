#include <stdio.h>

int min3(int a, int b, int c);

int main(void)
{
    int a = 3, b = 2, c = 4;
    printf("%d\n", min3(a, b, c));
    return 0;
}

int min3(a, b, c)
{
    if(a < b)
    {
        if(a < c)
            return a;
        else
            return c;
    } else {
        if(b < c)
            return b;
        else
            return c;
    }
    return 0;
}
