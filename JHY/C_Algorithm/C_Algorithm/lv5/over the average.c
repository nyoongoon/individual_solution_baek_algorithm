#include <stdio.h>

int main(void)
{
    int c, n, score[1000] ={0,};
    double average = 0;
    int sum, l;
    scanf("%d", &c);
    for(int i = 0; i < c; i++)
    {
        l = 0;
        sum = 0;
        scanf("%d", &n);
        for(int k = 0; k < n; k++)
            scanf("%d", &score[k]);
        for(int k = 0; k < n; k++)
            sum += score[k];
        average = (double)sum/n;
        for(int k = 0; k < n; k++)
        {
            if(score[k] > average)
                l++;
        }
        printf("%.3lf%\n", ((double)l/n)*100);
    }
    return 0;
}

