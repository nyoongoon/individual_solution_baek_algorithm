#include <stdio.h>

int main(void)
{
    int x, y, distance, T, order, i, sum;
    scanf("%d %d", &x, &y);
    distance = y - x;
    if(distance == 1)
        printf("%d\n", 1);
    return 0;
}
