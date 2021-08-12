#include <stdio.h>

int max4(int a, int b, int c, int d);

int main(void)
{
    int a = 4, b = 2, c = 2, d = 5;
    printf("%d\n", max4(a, b, c, d));
    return 0;
}

int max4(a, b, c, d)
{
    if(a > b)
    {
        if(a > c)
        {
            if(a > d)
                return a;
            else
                return d;
        }
        else {
            if(c > d)
                return c;
            else
                return d;
        }
    } else {
        if(b > c)
        {
            if(b > d)
                return b;
            else
                return d;
        }
        else {
            if(c > d)
                return c;
            else
                return d;
        }
    }
    return 0;
}

