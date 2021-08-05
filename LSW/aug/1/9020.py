#! /opt/homebrew/bin/python3.9

def prime(number):
    if number != 1:
        for f in range(2, number):
            if number % f == 0:
                return False
    else:
        return False
    return True


v = int(input())
input_list = list()
for i in range(v):
    v2 = int(input())
    input_list.append(v2)
for i in input_list:
    half = int(i/2)
    up_count = half
    donw_count = half
    while(1):
        if prime(up_count) and prime(donw_count):
            print(donw_count, up_count)
            break
        up_count = up_count+1
        donw_count = donw_count-1
