#! /opt/homebrew/bin/python3.9

v = int(input())


def hanoi(v, a, b, c):
    if v == 1:
        print(str(a), str(c))
    else:
        hanoi(v-1, a, c, b)
        print(a, c)
        hanoi(v-1, b, a, c)


total = 2**v-1
print(total)
hanoi(v, 1, 2, 3)
