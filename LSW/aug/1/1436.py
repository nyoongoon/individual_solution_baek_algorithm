#! /opt/homebrew/bin/python3.9

v = int(input())
number_list = list()
for i in range(0, 10):
    if i == 6:
        for j in range(0, 10):
            number = 6660+j
            number_list.append(number)
    else:
        number = i*1000+666
        number_list.append(number)
print(number_list[v-1])
