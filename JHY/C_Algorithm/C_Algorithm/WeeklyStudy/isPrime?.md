#  소수 판별법

##  1. N -> 2~N-1 까지 나눠지는 숫자가 있으면 안됨.

```c
bool isPrime(int n)
{
    if (n < 2)
        return false;
 
    for (int i = 2; i <= n - 1; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
```
결국 전체를 다 검사하는 것이므로, 시간 복잡도는 O(n)이다.

## 2. N/2까지 검사하기

N 이 소수가 아니라면, N = a * b로 나타낼 수 있으며,
두 수 모두 N/2보다 작다. 

```c
bool isPrime(int n)
{
    if (n < 2)
        return false;
 
    for (int i = 2; i <= n/2; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
```
하지만 이 방법도 시간 복잡도는 O(n)이므로 이득이 없다.

## 3. 제곱근까지 검사하기.

N이 소수가 아니라면, N= a * b로 나타낼 수 있다.
그렇다면, a, b 중 적어도 하나는 √N 이하이다.
~~~
N= a * b (N은 소수가 아니다.)
만약 두 수 모두 √N보다 크다면, a * b > N이 되므로, 모순이다.
그러므로 a와 b중 적어도 하나는 √N이하이다.
~~~

a <= b 일 경우, a는 2~√N이다. 그 때의 b는 √N보다 큰 값이 되어야 한다.

~~~
N= 18 일 경우, 약수는 = 1, 2, 3, 6, 9, 18 이다.
√18 = 3~4사이의 값이므로, 
a = 2, 3 이다.(1은 제외) 
따라서 2,3만 조사해보면 이 수가 소수인지 아닌지를 판별 할 수 있게 된다.
~~~

```c
bool prime(int number) {
    int i;
    for(i = 2; i * i <= number; i++) {
        if(number % i == 0)
            return false;
    }
    return true;
}
```
