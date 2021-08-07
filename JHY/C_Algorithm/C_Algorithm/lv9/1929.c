#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num);

int main(void)
{
    int n, m;
    scanf("%d %d", &m, &n);
    for(int i = m; i <= n; i++)
    {
        if(isPrime(i) == true)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

bool isPrime(number)
{
    int i;
    for(i = 2; i*i <= number; i++)
    {
        if(number % i == 0)
            return false;
    }
    return true;
}
