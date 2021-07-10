#include <stdio.h>
#include <math.h>

int main(void)
{
    double x1, y1, x2, y2, r1, r2, neg, pos,dist;
    int n= 0;
    int box, arr[n];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&r1,&x2,&y2,&r2);
        neg = r2 - r1;
        pos = r1 + r2;
        dist = sqrt((x2-x1)*(x2-x1) +(y2-y1)*(y2-y1));
        if(neg >dist)
            box = 0;
        else if(neg == dist)
            box = 1;
        else if(pos < dist)
            box = 0;
        else if(pos > dist)
            box = 2;
        else if(pos == dist)
            box = 1;
        else
            box = -1;
        arr[i] =  box;
        box = 0;
    }
    for(int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    return 0;
}
