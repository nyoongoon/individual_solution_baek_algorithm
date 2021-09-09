#! /opt/homebrew/bin/python3.9

set1 = set(range(1, 10001))
set2 = set()

for i in range(1, 10001):
    for j in str(i):
        i += int(j)
    set2.add(i)

self_number = sorted(set1-set2)
for i in self_number:
    print(i)
