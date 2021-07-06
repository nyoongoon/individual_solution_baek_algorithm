#include <stdio.h>

int main(void)
{
    int a= 100, b = 100;
    while (1) {
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0)
            break;
        printf("%d\n", a + b);
    }
    return 0;
}
