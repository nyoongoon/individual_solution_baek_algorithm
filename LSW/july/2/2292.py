#! /opt/homebrew/bin/python3.9

v = int(input())
count = 1
first_number = 1
last_number = 1

while(1):
    if v >= first_number and v <= last_number:
        break
    else:
        first_number = last_number+1
        last_number = last_number+(6*count)
        count = count+1

print(count)
