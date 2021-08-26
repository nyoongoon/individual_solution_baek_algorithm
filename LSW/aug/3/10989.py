#! /opt/homebrew/bin/python3.9
import sys

N = int(sys.stdin.readline())
nums = []
result = [0 for _ in range(10001)]

for i in range(N):
    num = int(sys.stdin.readline())
    result[num] += 1

for i in range(len(result)):
    for j in range(result[i]):
        print(i)


# 0 0 0 1 1 2 2 2 2 3 5 5 5

# array=[3,2,4,1,0,3]
# array2=[3,5,9,10,10,13]
# output = [0,0,0,1,1,2,2,2,2,3,5,5,5]

# O(N) > N logN
