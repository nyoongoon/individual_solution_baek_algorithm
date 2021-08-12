#include <stdio.h>
// 가우스의 덧셈 식.
int main(void)
{
    int n, sum = 0;
    printf("n을 입력하세요 : ");
    scanf("%d", &n);
    if(n % 2 == 0) // n이 짝수인 경우
    {
        sum = (1 + n) * n/2;
    } else { // n이 홀수 인 경우
        sum = (1 + n) * (1 + n) / 2 - (1 + n)/2;
    }
    printf("%d\n", sum);
    return 0;
}

