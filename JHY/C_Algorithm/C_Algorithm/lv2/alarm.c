#include <stdio.h>

int main(void)
{
    int H, M;
    scanf("%d %d", &H, &M);
    if(M - 45 < 0)
    {
        H = H-1;
        if(H < 0)
            printf("%d %d\n", 24 + H, 60 + M - 45);
        else
            printf("%d %d\n", H, 60 + M - 45);
    }
    else
    {
        printf("%d %d\n", H, M - 45);
    }
    
    return 0;
}
