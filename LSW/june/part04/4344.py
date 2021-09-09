#! /opt/homebrew/bin/python3.9

v = int(input())
avg_list = list()

for i in range(v):
    score_list = list(map(int, input().split()))
    avg = sum(score_list[1:]) / score_list[0]
    count = 0
    for j in score_list[1:]:
        if j > avg:
            count += 1
    avg_list.append((count/score_list[0])*100)
for i in avg_list:
    print('{:.3f}%'.format(i))
