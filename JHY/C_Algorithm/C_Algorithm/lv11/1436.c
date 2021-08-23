#include <stdio.h>
#include <math.h>

int main(void)
{
    int num = 666, n, index = 1;
    scanf("%d", &n); // 몇번째인지 ..
    while (n != 1) {
        if(index == n)
            break;
        num++;
        for(int i = 0 ; i < 10; i++)
        {
            if (num / (int)pow(10,i) % 1000 == 666) {
                index++;
                break;
            }
        }
    }
    if(n == 1)
        printf("666\n");
    else {
        printf("%d\n", num);
    }
    return 0;
}

