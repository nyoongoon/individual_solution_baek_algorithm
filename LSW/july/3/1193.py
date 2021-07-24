#! /opt/homebrew/bin/python3.9

v = int(input())
count = 0
add_count = 0
result = list()

while(1):
    count = count+add_count
    if count >= v:
        break
    add_count = add_count+1


step = v+add_count-count

if add_count % 2 != 0:
    for i in range(1, step+1):
        value = '%s/%s' % (str(add_count), str(i))
        result.append(value)
        add_count = add_count-1
else:
    for i in range(1, step+1):
        value = '%s/%s' % (str(i), str(add_count))
        result.append(value)
        add_count = add_count-1

print(result[-1])
