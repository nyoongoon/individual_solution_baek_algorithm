// 단어의 개수 구하기

/*
  알파벳이 나오면 시작해서, 공백 문자가 나오면 끝내기 -> 단어 하나 증가.
 */
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
