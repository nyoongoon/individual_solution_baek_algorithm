#! /opt/homebrew/bin/python3.9

v = int(input())
num_list = list()
for i in range(1, v+1):
    num_list.append(i)

while(len(num_list) > 1):
    num_list.pop(0)
    num_list = num_list[1:]+[num_list[0]]
print(num_list[0])
