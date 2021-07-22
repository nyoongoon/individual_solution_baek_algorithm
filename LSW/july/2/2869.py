#! /opt/homebrew/bin/python3.9

v = input()
v = v.split()
up = int(v[0])
down = int(v[1])
height = int(v[2])

day = (height-down)/(up-down)
if day == int(day):
    print(int(day))
else:
    print(int(day)+1)
