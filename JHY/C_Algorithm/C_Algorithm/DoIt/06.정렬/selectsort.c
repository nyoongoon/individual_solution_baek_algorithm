//선택정렬
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int * arr = NULL;
    int n = 0;
    int tmp = 0;
    int j = 0, i = 0, min = 0;
    scanf("%d", &n);
    
    arr = malloc(sizeof(int) * n);
    for(int k = 0; k < n; k++)
        scanf("%d", &arr[k]);

    for(i = 0; i < n - 1; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
                min = j;
        }
        tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
    for(int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    
    return 0;
}
