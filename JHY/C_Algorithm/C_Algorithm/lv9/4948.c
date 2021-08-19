// 소수 찾는 알고리즘에서 시간오링이 남.

#include <stdio.h>
#include <stdbool.h>

bool prime(int n);

int main(void)
{
    int n, i, order;
    int arr[246913] = {0,}; // 1~2n까지 최대의 범위
    for(int i = 2; i < 246913; i++)
    {
        if(prime(i) == true)
            arr[i] = 1;
    }
    scanf("%d",&n);
    while (n != 0) {
        order = 0;
        for(i = n + 1; i <= 2 * n; i++)
        {
                if(arr[i] == 1)
                {
                    order++;
                }
        }
        scanf("%d",&n);
        printf("%d\n", order);
    }
    return 0;
}

bool prime(number) { // 소수 찾는 알고리즘.
    int i;
    for(i = 2; i * i <= number; i++) {
        if(number % i == 0)
            return false;
    }
    return true;
}
