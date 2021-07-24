#! /opt/homebrew/bin/python3.9

m = int(input())
n = int(input())
result_list = list()
result = 0

for i in range(m, n+1):
    for j in range(2, i+1):
        if i % j == 0 and i != j:
            break
        elif i % j == 0 and i == j:
            result = result+i
            result_list.append(i)

if result_list:
    print(result)
    print(result_list[0])
else:
    print(-1)
