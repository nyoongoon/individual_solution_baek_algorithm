#include <stdio.h>
#include <math.h>
int d(int );

int main(void)
{
    int n,a;
    int arr[9999];
//    for(int i = 1; i < 10000; i++)
//    {
//        d(i);
//
//    }
    scanf("%d", &n);
    d(n);
    return 0;
}

int d(number)
{
    int n;
    if(number <= 10)
    {
        if(number / 2 != 0)
            return number;
    }
    else if(number > 10 && number < 100)
    {
        for(int i = 10 ; i < 100; i++)
        {
            
        }
        if(!(number == number + number / 10 + number % 10))
            printf("%d\n", number);
    }
//    n = number + number/1000 + (n%1000)/100 + ((n%1000)%100)/10 +((n%1000)%100)%10;
//    printf("%d\n",n);
    return 0;
}
