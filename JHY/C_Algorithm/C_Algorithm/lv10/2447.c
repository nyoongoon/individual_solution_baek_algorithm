#include <stdio.h>

void star(int n);

int main(void)
{
    int n = 0;
    int starContainer[2187][2187] = { 0,};
    scanf("%d", &n);
    star(n);
    return 0;
}

void star(n)
{
    if(n / 3 >= 1)
    {
        for(int i = 0; i < n; i++)
            printf("*");
        printf("\n");
        for(int i = 0; i < n / 3; i++)
        {
            printf("* *");
        }
        printf("\n");
        for(int i = 0; i < n; i++)
            printf("*");
        printf("\n");
    }
    else {
        star(n / 3);
    }
}
