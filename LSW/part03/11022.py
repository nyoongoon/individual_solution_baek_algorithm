v=int(input())
r=list()
for i in range(0,v):
    v2=input()
    v2=v2.split()
    result="Case #%s: %s + %s = %s"%(i+1,v2[0],v2[1],int(v2[0])+int(v2[1]))
    r.append(result)
for i in r:
    print(i)