#include <stdio.h>
double fact(double num);

int main(void)
{
    double n = 0, m = 0;
    int order = 0;
    scanf("%d", &order);
    for(int i = 0; i < order; i++)
    {
        scanf("%lf %lf", &n, &m);
        printf("%.0f\n", fact(m) / (fact(n) * fact(m - n)));
    }
    return 0;
}

double fact(double n)
{
    if(n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}
