#! /opt/homebrew/bin/python3.9
v = int(input())


def fibo(value):
    if value <= 1:
        return value
    return fibo(value-1)+fibo(value-2)


print(fibo(v))
