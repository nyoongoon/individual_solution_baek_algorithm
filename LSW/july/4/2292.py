#! /opt/homebrew/bin/python3.9

v = int(input())
count = 1
first_number = 1
last_number = 1

while(1):
    if v >= first_number and v <= last_number:  # first <= v <= last
        break
    else:
        first_number = last_number+1
        last_numbe = last_number+(6*count)
        count = count+1  # count++

print(count)

# 1 : 1 ~ 1  + 1
# 2 : 2 ~ 7  + 6
# 3 : 8 ~ 19 + 12
# 4 : 20 ~ 37 + 18
