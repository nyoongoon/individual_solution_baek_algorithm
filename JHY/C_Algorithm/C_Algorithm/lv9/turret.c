#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int n, sum, diff;
    int x1, y1, r1, x2, y2, r2;
    double d;
    int result = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // 두 원점 사이의 거리
        sum = r1 + r2; // 두 반지름의 합
        diff = abs(r1-r2); // 두 반지름의 차이
        if(d == 0 & diff == 0)
            result = -1;
        else if(diff < d & d < sum)
            result = 2;
        else if(diff == d || sum == d)
            result = 1;
        else
            result = 0;
        printf("%d\n", result);
    }
    return 0;
}
