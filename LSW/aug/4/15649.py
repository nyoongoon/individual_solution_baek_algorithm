#! /opt/homebrew/bin/python3.9
# 자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.
# 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열

n, m = map(int, input().split())

stack = []


def f():
    if len(stack) == m:
        print(' '.join(map(str, stack))) # [1,2,4] -> 1 2 4
        return

    for i in range(1, n + 1):
        if i in stack:
            continue
        stack.append(i)
        f()
        stack.pop()


f()

0
|
1 - 3 - 2
      - 4
  - 4
2

3

4