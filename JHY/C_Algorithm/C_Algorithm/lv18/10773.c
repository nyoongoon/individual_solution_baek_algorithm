/*
 1. 동적할당을 통해 배열을 만듦.
 2. 배열에 숫자 받기
 3. 0이 나오면 index 값을 하나 내리기
 */


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0, j, n, sum = 0;
    int * arr = NULL;
    scanf("%d", &n);
    arr = malloc(n * sizeof(int)); // 배열 만들기
    for(j = 0; j < n; j++) // 배열에 숫자 담기 + 총 합 구하기!
    {
        scanf("%d", &arr[i]);
        if(arr[i] == 0) {
            i--;
            sum -= arr[i];
        } else {
            sum += arr[i];
            i++;
        }
    };
    printf("%d\n", sum);
    free(arr);

    return 0;
}

/* 예를 들어 5까지 배열.
 a[0] a[1] a[2] a[3] a[4]
   1    2    0
 */
