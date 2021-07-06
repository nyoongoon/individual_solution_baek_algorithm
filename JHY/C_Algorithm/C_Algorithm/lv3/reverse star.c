#include <stdio.h>

int main(void)
{
    int n, k, j, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        for(k = 1 ; k < n - i; k++)
        {
            printf(" ");
        }
        for(j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
