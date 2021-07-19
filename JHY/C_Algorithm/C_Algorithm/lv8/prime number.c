#include <stdio.h>

int main(void)
{
    int primeNum, n = 2;
    int M, N = 0;
    scanf("%d %d", &M, &N);
    if(M > N)
    {
        printf("-1\n");
        while(N < M)
        {
            if(primeNum % n == 0)
            {
                printf("-1");
                break;
            }
            n++;
            printf("소수\n");
        }
    }
    return 0;
}
