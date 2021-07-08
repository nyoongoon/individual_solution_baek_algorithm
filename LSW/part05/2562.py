r1=list()
r2=list()
for i in range(0,9):
    v=int(input())
    r1.append(v)
    r2.append(v)
r2.sort()
max=r2[-1]
idx=r1.index(max)

print(max)
print(idx)