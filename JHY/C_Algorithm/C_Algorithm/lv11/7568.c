#include <stdio.h>

int main(void)
{
    int weight[50] = {0, };
    int height[50] = {0, };
    int n = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d %d", &weight[i], &height[i]);
    for(int i = 0; i < n; i++)
    {
        int order = 0;
        for(int j = 0; j < n; j++)
        {
            if(weight[i]<weight[j] && height[i]<height[j])
                order++;
        }
        printf("%d ", order+1);
    }
    return 0;
}
