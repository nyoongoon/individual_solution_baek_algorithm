#include <stdio.h>
#include <math.h>

int main(void)
{
    double A,B,V, day;
    scanf("%lf %lf %lf", &A, &B, &V);
    day = ((V - A) / (A - B)) + 1;
    printf("%d\n", (int)ceil(day));
    return 0;
}
