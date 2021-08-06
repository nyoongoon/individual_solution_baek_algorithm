# 1. 포인터의 이해

## 1. 1 포인터란 무엇인가 ?

- 주소 값 저장을 목적!
- C언어에서 시작번지만을 가지고 위치를 표현.
- 포인터
    - 변수 형태의 포인터
    - 상수 형태의 포인터

### 포인터 변수와 연산자

```c
#include <stdio.h>

int main(void)
{
    int num = 7;
    int * pnum; // pnum = 포인터 변수의 이름, int * = int형 변수의 주소 값 저장하는 포인터 변수 선언
    pnum = &num;
    return 0;
}
```

- 포인터 변수의 크기가 주소 값의 크기와 일치해야 주소 값으 저장할 수 있다. ⇒ 주소 값의 크기와 포인터 변수의 크기가 동일함.
- 포인터 변수 선언의 기본 공식

    ```c
    type * ptr;
    // type형의 변수의 주소값을 저장하는 포인터 변수 ptr의 선언
    ex)
    int * pnum1; // int형 변수를 가리키는 pnum1의 선언
    ```

## 1.2. 포인터와 관련 있는 연산자: & 연산자와 * 연산자

- &연산자 → 피연산자의 주소 값을 반환하는 연산자.

```c
#include <stdio.h>

int main(void)
{
    int num = 5;
    int * pnum = &num; // num의 주소 값을 반환해서 포인터 변수 pnum을 초기화
    ....
    return 0;
}
```

- 포인터가 가리키는 메모리를 참조하는 * 연산자

```c
#include <stdio.h>

int main(void)
{
    int num = 10;
    int * pnum = &num; // num의 주소 값을 반환해서 포인터 변수 pnum을 초기화
    *pnum = 20; // pnum이 가리키는 변수에 20 저장!
    printf("%d\n", *pnum); // pnum이 가리키는 변수를 부호 있는 정수로 출력!
    return 0;
}
```

- 포인터의 형은 어떤 역할을 하는가?

    → 메모리 공간을 참조하는 기준 마련.

    → 포인터에 형이 존재하지 않는다면 * 연산을 통한 메모리의 접근은 불가능하다.

# 2. 포인터와 배열의 관계

- 배열의 이름 = 상수 형태의 포인터

```c
#include <stdio.h>

int main(void)
{
    int arr[3] = {0, 1, 2};
    printf("배열의 이름 : %p \n", arr);
    printf("첫 번째 요소 : %p \n", &arr[0]);
    printf("두 번째 요소 : %p \n", &arr[1]);
    printf("세 번째 요소 : %p \n", &arr[2]);
    return 0;
}

result )
배열의 이름 : 0x16fdff418 
첫 번째 요소 : 0x16fdff418 
두 번째 요소 : 0x16fdff41c 
세 번째 요소 : 0x16fdff420
```

- 배열의 이름은 배열의 시작 주소 값을 의미하며, 그 형태는 값의 저장이 불가능한 상수이다.

```c
int arr1[5] // arr1은 int형 포인터 상수
double arr2[7] // arr2는 double형 포인터 상수
```

→ 1차원의 배열이름의 포인터 형은 배열의 이름이 가리키는 대상을 기준으로 결정.

### 포인터를 배열의 이름처럼 사용할 수 있다!

```c
#include <stdio.h>

int main(void)
{
    int arr[3] = {15, 25, 35};
    int * ptr = &arr[0];
    
    printf("ptr[0] = %d , arr[0] = %d \n", ptr[0], arr[0]);
    printf("ptr[1] = %d , arr[1] = %d \n", ptr[1], arr[1]);
    printf("ptr[2] = %d , ptr[2] = %d \n", ptr[2], arr[2]);
    printf("*ptr = %d , *arr = %d \n", *ptr, *arr);
    return 0;
}

result

ptr[0] = 15 , arr[0] = 15 
ptr[1] = 25 , arr[1] = 25 
ptr[2] = 35 , ptr[2] = 35 
*ptr = 15 , *arr = 15
```

- 포인터를 대상으로 n 증감연산 ⇒ n * sizeof(포인터 자료형)의 크기
- 포인터 그 자체를 증감하는 것은, 주소를 바꾸는 것

cf)

- *(++ptr) = 20;  → ptr에 저장된 값 자체를 변경.
- *(ptr+1) = 20; → ptr에 저장된 값은 변경되지 않음.

## 상수 형태의 문자열을 가리키는 포인터

```c
#include <stdio.h>
#include <math.h>

int main(void)
{
    char str1[] = "My String";
    char * str2 = "Your String";
    printf("%s %s\n", str1, str2);
    
    str2 = "Our String";
    printf("%s %s\n", str1, str2);
    
    str1[0] = 'X';
    str2[0] = 'X';
    printf("%s %s\n", str1, str2);
    return 0;
}
```

str[0] 에서 에러 발생! 

str2는 '상수 형태의 문자열'이라 변경 시 에러발생.

### 포인터 배열

- 주소 값 저장이 가능한 배열 → 포인터 배열!

```c
#include <stdio.h>

int main(void)
{
    int num1 = 10, num2 = 20, num3 = 30;
    int * arr[3] = {&num1, &num2, &num3};
    
    printf("%d\n", *arr[0]);
    printf("%d\n", *arr[1]);
    printf("%d\n", *arr[2]);
    return 0;
}
```

### 문자열을 저장하는 포인터 배열

```c
#include <stdio.h>

int main(void)
{
    char * strArr[3] = {"Study","hard","well"};
    printf("%s\n", strArr[0]);
    printf("%s\n", strArr[1]);
    printf("%s\n", strArr[2]);
    return 0;
}
```

### 배열을 함수로 전달하기

```c
#include <stdio.h>

void showArrayElem(int * param, int len)
{
    int i;
    for(i = 0; i < len; i++)
    {
        printf("%d ", param[i]);
    }
    printf("\n");
}

void AddArrayElem(int * param, int len, int add)
{
    int i;
    for(i = 0; i < len; i++)
        param[i] += add;
}

int main(void)
{
    int arr1[3] = {1,2,3};
    AddArrayElem(arr1, sizeof(arr1)/ sizeof(int), 1);
    showArrayElem(arr1, sizeof(arr1)/ sizeof(int));
    
    AddArrayElem(arr1, sizeof(arr1)/ sizeof(int), 2);
    showArrayElem(arr1, sizeof(arr1)/ sizeof(int));
    
    AddArrayElem(arr1, sizeof(arr1)/ sizeof(int), 3);
    showArrayElem(arr1, sizeof(arr1)/ sizeof(int));
    return 0;
}
```

- 포인터는 메모리에 접근하므로, 배열의 주소 값만 안다면 어디서든 배열에 접근해 저장된 값을 참조하고 변경할 수 있다.
