//C17에선 오답인데, C99에선 정답..?

#include <stdio.h>

int main(void)
{
    int n, i, a=0, b=0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}
