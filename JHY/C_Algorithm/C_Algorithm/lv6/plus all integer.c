#include <stdio.h>
int function(int n);

int main(void)
{
    int number;
    scanf("%d", &number);
    function(number);
    return 0;
}

int function(number)
{
    int n = number;
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
