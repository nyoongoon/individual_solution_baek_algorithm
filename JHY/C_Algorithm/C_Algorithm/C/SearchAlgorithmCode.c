#include <stdio.h>

int main(void)
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}, index = 0, number;
    int l = 0, r = 9, m = 0;
    scanf("%d", &number);
    while(l <= r)
    {
        m = l + (r-l)/2; // Data Overflow 방지!
        
        if(number == arr[m]) {
            index = m;
            break;
        }
        else if(number < arr[m]) {
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    printf("%d\n", index + 1);
    return 0;
}
