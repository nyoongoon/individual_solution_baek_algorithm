#include <stdio.h>

int main(void)
{
    int denom, numer, n = 1, a = 2; // 분모, 분자,
    int order, line = 1, diff; // 순서 , 줄
    scanf("%d", &order);
    while(1)
    {
        if(n >= order)
            break;
        n += a;
        a++;
        line++;
    }
    diff = order-(n - a + 1); // 몇번 째 줄의 몇번 째 숫자인지 판단..
//    printf("%d\n%d\n", diff,line);
    if( line % 2 == 1 )
    {
        numer = line - diff + 1;
        denom = diff;
        printf("%d/%d\n", numer,denom);
    } else {
        denom = line - diff + 1;
        numer = diff;
        printf("%d/%d\n", numer,denom);
    }
    return 0;
}
