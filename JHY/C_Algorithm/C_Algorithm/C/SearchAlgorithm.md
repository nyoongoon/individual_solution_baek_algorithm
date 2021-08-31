#  검색 알고리즘


- 1. 선형탐색 
    - 선형탐색 
    - 시간복잡도: O(N)

[1, 4, 6, 5, 7, 2, 3, 8, 9, 10] 배열이 있다. 
여기서 8을 찾으려면? 
*처음부터 끝까지 전부 비교하면서 8이 나올때까지 검색*
즉,

**모든 수를 전부 체크하는 것이 선형탐색이다.**

~~~
#include <stdio.h>

int main(void)
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}, index = 0, number;
    scanf("%d", &number);
    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == number)
        {
            index = i+1;
            break;
        }
    }
    printf("%d\n", index);
    return 0;
}

~~~




- 2. 이진탐색 
    - 이진탐색 
    - 시간복잡도: O(logN)

[1, 2, 3, 4, 5, 6, 7, 8, 9, 10] 배열이 있다. 
여기서 8을 찾으려면? 

왼쪽 끝 값 = 1
오른쪽 끝 값 = 10
중간 값 = 5

8 > 5이므로 
-> 
왼쪽 끝 값 = 중간값 +1 (6)
오른쪽 끝 값 = 10
중간 값 = 8

.... 
이런식으로 찾아나가면 됨! 


**중간 값과 찾으려는 값을 비교해서 절반씩 범위를 줄여나가며 검색을 하는 것이 2진탐색**

~~~
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
}

~~~

- 제약사항은 무조건 오름차순 || 내림차순으로 정렬이 되어있어야 한다.
