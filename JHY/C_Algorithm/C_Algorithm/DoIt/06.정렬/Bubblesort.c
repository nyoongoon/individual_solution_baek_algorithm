#include <stdio.h>
#include <stdlib.h>

void bubble(int *arr, int n)
{
    int tmp = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

int main(void)
{
    int order = 0;
    int * arr = NULL;
    
    printf("배열의 개수를 입력하세요: ");
    scanf("%d", &order);
    
    arr = malloc(order * sizeof(int));
    
    printf("각 배열에 들어갈 값을 입력하세요: \n");
    for(int i =0; i < order; i++)
        scanf("%d", &arr[i]);
    bubble(arr, order);

    for(int i = 0; i < order; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
