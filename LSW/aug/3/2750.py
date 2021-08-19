#! /opt/homebrew/bin/python3.9
v = int(input())
array = list()
for i in range(v):
    input_vaule = int(input())
    array.append(input_vaule)

for i in range(1, len(array)):
    for j in range(i, 0, -1):
        if array[j] < array[j-1]:
            array[j], array[j-1] = array[j-1], array[j]
        else:
            break

for i in array:
    print(i)
