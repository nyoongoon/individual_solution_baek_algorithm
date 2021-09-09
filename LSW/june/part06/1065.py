#! /opt/homebrew/bin/python3.9
n = int(input())
count = 0

for i in range(1, n+1):
    if i < 100:
        count += 1
    else:
        first = int(str(i)[0])
        second = int(str(i)[1])
        third = int(str(i)[2])
        if first-second == second-third:
            count += 1  # count++ 안됨
print(count)

# string='abc'
#string[0] == 'a'
#string[1] == 'b'
