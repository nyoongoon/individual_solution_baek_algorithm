// 단어의 개수 구하기

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char arr[1000000];
    int count = 0;
    int word = 1;
    scanf("%[^\n]s", arr);
    for(int i = 0; arr[i] != NULL; ++i)
    {
        if(isalpha(arr[i]))
        {
            if(word)
            {
                count++;
                word = 0;
            }
        } else {
            word = 1;
        }
    }
    printf("%d\n", count);
    return 0;
}
