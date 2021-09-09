#! /opt/homebrew/bin/python3.9

v = input()
v = v.upper()
v_list = list(map(str, v))
v_set = set(v_list)
v_count = list()
for i in v_set:
    count = 0
    for j in v_list:
        if j == i:
            count += 1
    v_count.append(count)

if len(v_set) != len(set(v_count)):
    print('?')
else:
    print(list(v_set)[v_count.index(max(v_count))])
