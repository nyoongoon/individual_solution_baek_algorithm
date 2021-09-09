#include <stdio.h>

int main(void)
{
    int temp1 = 0, temp2 = 0, min = 0;
    int i = 0;
    int weight;
    scanf("%d", &weight);
    if(weight % 5 == 0)
    {
        min = weight / 5;
        printf("%d", min);
        return 0;
    }
    
    if(weight % 3 == 0)
        temp1 = weight / 3;
    
    for(i = weight / 5; i > 0; i--)
    {
        if((weight - 5 * i) % 3 == 0 )
        {
            temp2 = (weight - 5 * i) / 3 + i;
            break;
        }
    }
    
    if(temp1 == 0 && temp2 == 0)
    {
        printf("-1");
        return 0;
    }
    
    if(temp2 == 0)
        printf("%d", temp1);
    else
        printf("%d\n", temp2);
  
    return 0;
}
