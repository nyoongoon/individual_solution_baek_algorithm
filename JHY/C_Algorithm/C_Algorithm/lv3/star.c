#include <stdio.h>

int main(void)
{
    int i , k, n= 0;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        for(k = 0; k < i+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
