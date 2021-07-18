import sys
v=int(sys.stdin.readline())
result=list()
for i in range(v):
    v2=sys.stdin.readline()
    v2=v2.split()
    result.append(int(v2[0])+int(v2[1]))

for i in result:
    print(i)