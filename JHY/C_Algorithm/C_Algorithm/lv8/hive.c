#include <stdio.h>

int main(void)
{
    int d = 6, r = 1, n, l = 2;
    int x = d + r; // 방 마지막 번호
    scanf("%d", &n);
    if(n == r)
        printf("1\n");
    else
    {
        while (n > x) {
            if(n > x)
            {
                d += 6;
            }
            x += d;
            l++;
        }
        printf("%d\n", l);
    }
    return 0;
}
