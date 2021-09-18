#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[100] = "I wanna go to Germany";
    char arr2[100] = "I wanna go to Germany";
    int boolean = 0;
    
    boolean = strcmp(arr, arr2);
    
    if(boolean == 0)
        printf("같은 스트링 입니다.\n");
    else
        printf("다른 스트링 입니다.\n");
    return 0;
}
