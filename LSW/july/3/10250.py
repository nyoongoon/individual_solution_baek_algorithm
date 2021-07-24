#! /opt/homebrew/bin/python3.9
import math

test_amount = int(input())
result = list()

for i in range(0, test_amount):
    v = input()
    v = v.split()
    h = int(v[0])
    w = int(v[1])
    n = int(v[2])
    xx = math.ceil(n/h)  # w
    yy = n % h  # h
    if yy == 0:
        yy = h
    ho = 100*yy+xx
    result.append(ho)

for i in result:
    print(i)
