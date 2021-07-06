#include <stdio.h>

int main(void)
{
    int n, a, k;
    scanf("%d %d", &n, &a);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &k);
        if(k < a)
            printf("%d ",k);
    }
    return 0;
}
