#include <stdio.h>

int main(void)
{
    int n, k, max =  -1000001, min = 1000001;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &k);
        if(min > k)
            min = k;
        if(max < k)
            max = k;
    }
    printf("%d %d\n", min, max);
    return 0;
}
