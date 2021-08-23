#include <stdio.h>

void recur(int x) {
    if( x > 0)
    {
        recur(x - 1);
        printf("%d\n", x);
        ;
        recur(x - 2);
    }
}

int main(void)
{
    int x;
    printf("정수를 입력하세요 : ");
    scanf("%d", &x);
    recur(x);
    return 0;
}
