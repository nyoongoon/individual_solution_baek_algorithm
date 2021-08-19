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

number = list(map(int, input().split()))
count = 0
for i in number:
    if prime(i):
        count += 1
print(count)
