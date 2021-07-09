// 배열 입력받기 -> scanf("%d", &arr[i]);

#include <stdio.h>

int main(void)
{
    int arr[10];
    int rest[42] = {0 ,};
    int n = 0;
    int k = 0;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        n = arr[i] % 42;
        rest[n]++;
    }
    for(int i =0; i < 42; i ++)
    {
        if(rest[i] != 0)
            k++;
    }
    printf("%d\n",k);
    return 0;
}
