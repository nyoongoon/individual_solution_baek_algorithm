from collections import deque


def prime(n: int) -> bool:
    if n < 2:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    l = round(n ** 0.5) + 1
    for i in range(3, l, 2):
        if n % i == 0:
            return False
    return True


def solution(n, k):
    answer = 0
    switch_number_list = deque()
    while True:
        switch_number_list.appendleft(str(n % k))
        n = n//k
        if n == 0:
            break
    if switch_number_list[0] == '0':
        switch_number_list.popleft()
    target_number = ''.join(switch_number_list)
    find_prime = target_number.split('0')
    for i in find_prime:
        if i and prime(int(i)):
            answer += 1
    return answer


print(solution(437674, 3))
print(solution(110011, 10))
