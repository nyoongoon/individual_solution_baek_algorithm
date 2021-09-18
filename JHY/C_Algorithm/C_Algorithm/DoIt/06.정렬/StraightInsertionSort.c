#include <stdio.h>

int main(void)
{
    int i, j, k;
    int temp;
    int arr[] = {50, 20, 30, 10, 40};
    int n = 5;
    for(i = 1; i < n; i++)
    {
        j = i;
        while(j > 0 && arr[j] < arr[j-1])
        {
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
        for(k = 0; k < n; k++)
            printf("%d ", arr[k]);
        printf("\n");
    }
    return 0;
}
