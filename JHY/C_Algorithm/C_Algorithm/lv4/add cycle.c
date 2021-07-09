#include <stdio.h>

int main(void)
{
    int n, a, b, temp, k = 0 , count = 0;
    scanf("%d", &n);
    temp = n;
    while (1) {
        a = temp / 10;
        b = temp % 10;
        k = b * 10 + (a + b)%10;
        temp = k;
        count += 1;
        if(n == temp)
            break;
    }
    printf("%d\n", count);
    return 0;
}
