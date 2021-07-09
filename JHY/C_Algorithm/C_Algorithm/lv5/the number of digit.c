#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c, i, result, k;
    int arr[10]={0};
    scanf("%d %d %d", &a, &b, &c);
    result = a * b * c;
    while(result > 0) {
        k = result % 10;
        arr[k] += 1;
        result /= 10;
    }
    for(i = 0 ; i < 10; i++)
        printf("%d\n", arr[i]);
    

    return 0;
}
