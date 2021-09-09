#! /opt/homebrew/bin/python3.9

v = int(input())
last = list()
for i in range(v):
    v2 = input().split()
    result = ''
    for j in list(map(str, v2[1])):
        result += j*int(v2[0])
    last.append(result)
for i in last:
    print(i)
