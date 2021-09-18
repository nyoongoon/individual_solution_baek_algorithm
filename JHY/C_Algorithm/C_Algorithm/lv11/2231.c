#include <stdio.h>

int main(void)
{
    int number;
    int i = 0;
    scanf("%d", &number);
    for(i = 1 ; i < number; i++)
    {
        int temp = i;
        int num = i;
        
        while(temp > 0) {
            num += temp % 10;
            temp /= 10;
        }
        if(number == num)
        {
            printf("%d\n", i);
            number = 0;
            break;
        }
    }
    if(number != 0)
        printf("0\n");
    return 0;
}
