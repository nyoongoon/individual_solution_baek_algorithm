#! /opt/homebrew/bin/python3.9
v = int(input())

a = list()


def recur(n):
    if n > 0:
        recur(n-1)
        print(n)
        a.append(n)
        recur(n-2)


recur(v)
print(a)
