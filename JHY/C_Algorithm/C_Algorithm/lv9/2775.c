#include <stdio.h>

int main(void)
{
    int wg[15][14] = {0}; // 초기화
    int order,k = 0 ,n = 0;

    for(int i = 0 ; i < 14; i++) // 0층 채우기
        wg[0][i] = i + 1;
    
        
    for(int i = 1; i < 15; i++) // 각 층의 사람 수 채우기
    {
        for(int j = 0 ; j < 14; j++)
        {
            for(int k = 0; k <= j; k++)
            {
                wg[i][j] += wg[i - 1][k];
            }
        }
    }
    
    scanf("%d", &order);
    
    for(int l = 0 ; l < order; l++)
    {
        scanf("%d %d", &k, &n);
        printf("%d\n", wg[k][n-1]);
    }
    return 0;
}
