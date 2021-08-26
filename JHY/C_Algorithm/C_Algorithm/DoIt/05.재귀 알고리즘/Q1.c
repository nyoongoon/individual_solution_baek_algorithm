//재귀 함수 호출을 사용하지 않고 factorial 함수를 작성하시오

/*
 ** n * n-1 * n-2 * ... * 1
 1. 숫자 받기 n
 2. 무한반복 - n이 1이 될떄 멈춤 n--;
 */


#include <stdio.h>

int main(void)
{
    int n, fac = 0;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &n);
    fac = n;
    while (1) {
        fac *= n - 1;
        n--;
        if (n == 1)
            break;
    }
    printf("팩토리얼의 값은 %d입니다.\n", fac);
    return 0;
}
