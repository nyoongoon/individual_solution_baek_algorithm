#include <stdio.h>

int main(void)
{
    int primeNum, N, M;
    scanf("%d", &N);

    for(int i = 2; i < N; i++)
    {
        M = 2;
        while (1)
        {
            if(N == M)
                break;
            if(i % M != 0)
            {
                printf("%d\n", i);
            }
            M++;
        }
    }

    
}
