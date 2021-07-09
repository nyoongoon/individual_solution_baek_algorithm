// 문자열을 배열로 받는것 연습하기!
#include <stdio.h>

int main(void)
{
    char arr[80];
    int n,l = 0, sum = 0;;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", arr);
        for(int i = 0; i < 80; i++)
        {
            if(arr[i] == 0)
                break;
            else if(arr[i] == 'O')
            {
                l++;
                sum += l;
            }
            else if(arr[i] == 'X')
            {
                l = 0;
                sum += l;
            }
        }
        printf("%d\n", sum);
        sum = 0;
        l = 0;
    }
    return 0;
}
