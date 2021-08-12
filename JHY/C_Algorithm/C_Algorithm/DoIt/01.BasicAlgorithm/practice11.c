#include <stdio.h>
#include <math.h>


int main(void)
{
    int number;
    int i = 0;
    printf("숫자를 입력하세요: ");
    scanf("%d", &number);
    while (number != 0) {
        number /= 10;
        ++i;
    }
    printf("%d\n", i);
    return 0;
}
