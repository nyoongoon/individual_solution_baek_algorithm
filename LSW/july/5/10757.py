#! /opt/homebrew/bin/python3.9

x1, x2 = map(list, input().split())
result = list()
if len(x1) != len(x2):
    if len(x1) > len(x2):
        x2 = list('0'*(len(x1)-len(x2)))+x2
    else:
        x1 = list('0'*(len(x2)-len(x1)))+x1
x1 = ['0']+x1
x2 = ['0']+x2
x1.reverse()
x2.reverse()
ten_count = 0
for i in range(len(x1)):
    x3 = int(x1[i])+int(x2[i])+ten_count
    if x3 >= 10:
        x3 = x3-10
        result.append(str(x3))
        ten_count = 1
    else:
        result.append(str(x3))
        ten_count = 0
result.reverse()
if result[0] == '0':
    result.pop(0)
print(''.join(result))
