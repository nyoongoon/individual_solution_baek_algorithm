#include <stdio.h>
#include <stdbool.h>
#include <stdbool.h>

bool prime(int number); //소수면 return 1 , 소수 아니면 return 0;

int main(void)
{
    int number, a, i, times;
    scanf("%d", &times); // 몇 번 돌릴지...
    for(int j = 0; j < times; j++)
    {
        scanf("%d", &number);
        a = number / 2;
        if(prime(a) == true) // 절반이 바로 소수인 경우
            printf("%d %d\n", a, a);
        else
        {
            for(i = 1 ; i < a; i++)
            {
                if(prime(a-i) == true && prime(a + i) == true) // 절반에서 숫자 1씩더하고, 빼면서 두 수 모두 소수가 될 때 까지 찾는 알고리즘.
                {
                    printf("%d %d\n", a-i, a + i);
                    break;
                }
            }
        }
    }
    return 0;
}

bool prime(a) //소수 찾는 함수.
{
    int i;
    for(i = 2; i < a; i++)
    {
        if(a % i == 0)
            break;
    }
    if(a == i)
        return true;
    else
        return false;
}
