// 그냥 적혀져있는 그대로 식으로 변환시키면 된다.

#include <stdio.h>

int Pivonac(int number);

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", Pivonac(n));
    return 0;
}

int Pivonac(number)
{
    if(number >= 2)
        return Pivonac(number - 1) + Pivonac(number - 2);
    else
        return number;
    return 0;
}
