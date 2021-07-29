#! /opt/homebrew/bin/python3.9

test_case = int(input())
for i in range(test_case):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    d = ((x1-x2)**2+(y1-y2)**2)**(1/2)
    if d == 0 and r1 == r2:
        print(-1)
    elif abs(r1-r2) == d or r1 + r2 == d:
        print(1)
    elif abs(r1-r2) < d < (r1+r2):
        print(2)
    else:
        print(0)