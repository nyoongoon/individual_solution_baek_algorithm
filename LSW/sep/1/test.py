#! /opt/homebrew/bin/python3.9

star = ["***", "* *", "***"]


def stars(n):
    i = 1
    j = 3
    a = n[i % len(n)] + " " * len(n) + n[i % len(n)]
    b = n[j % len(n)] * 3
    print(a)
    print(b)


stars(star)
