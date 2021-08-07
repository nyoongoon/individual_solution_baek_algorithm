#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main(void)
{
    int r;
    scanf("%d", &r);
    
    printf("%.6f\n%.6f\n", (M_PI * pow(r,2)), 2 * pow(r,2));
    return 0;
}
