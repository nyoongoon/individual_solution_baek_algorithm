#! /opt/homebrew/bin/python3.9

n, m = map(int, input().split())
value = list(map(int, input().split()))
result = 0

for i in range(n):
    for j in range(i+1, n):
        for k in range(j+1, n):
            if value[i]+value[j]+value[k] > m:
                continue
            else:
                result = max(result, value[i]+value[j]+value[k])
print(result)
