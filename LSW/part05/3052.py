a=list()
for i in range(0,10):
    v=int(input())
    div=v%42
    if div not in a:
        a.append(div)
    else:
        continue

print(len(a))