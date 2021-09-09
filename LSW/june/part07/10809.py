#! /opt/homebrew/bin/python3.9

v = list(map(str, input()))
result = ['-1']*26

for i in range(0, 26):
    if result[i] == '-1':
        if chr(i+97) in v:
            result[i] = str(v.index(chr(i+97)))
print(' '.join(result))
