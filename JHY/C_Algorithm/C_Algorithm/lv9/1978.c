#include <stdio.h>
#include <stdbool.h>

bool prime(int n);

int main(void)
{
    int n, m, number=0;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d",&n);
        if(prime(n) == true)
            number++;
    }
    printf("%d\n", number);
    return 0;
}

bool prime(n)
{
    int i = 0;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            break;
    }
    if(n == i)
        return true;
    else
        return false;
}
