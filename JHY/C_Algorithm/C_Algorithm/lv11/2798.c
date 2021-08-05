#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m, max=0, sum = 0, arr[100] ={0 ,};
    scanf("%d %d\n", &n, &m);
    
    for(int i = 0 ; i < n; i++) // 배열에 숫자 담기.
        scanf("%d", &arr[i]);
    
    for(int i = 0; i < n; i++)
    {
        for(int l = i + 1 ; l < n; l++)
        {
            for(int k = l + 1; k < n; k++)
            {
                sum = arr[i] + arr[l] + arr[k]; // 3수의 합 + 전수검사.
                if(sum > max && sum <= m)
                    max = sum;
            }
        }
    }
    
    printf("%d\n", max);
    
    return 0;
}
