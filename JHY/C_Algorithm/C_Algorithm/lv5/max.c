#include <stdio.h>

int main(void)
{
    int index = 0, max = 0, k, j = 1;
    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &k);
        if(max < k)
        {
            max = k;
            index = j;
        }
        j++;
    }
    printf("%d\n%d\n", max, index);
    return 0;
}
