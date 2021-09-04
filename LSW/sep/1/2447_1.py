#! /opt/homebrew/bin/python3.9

v = int(input())


def star(value):
    if value == 1:
        return 0
    for i in range(value):
        print('***\n* *\n***')
    star(value//3)


star(v)
#star_draw = [[['*'] for i in range(v)] for j in range(v)]
# print(star_draw)
