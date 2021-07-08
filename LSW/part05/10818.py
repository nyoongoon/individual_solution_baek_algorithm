v=int(input())
x=input()
x=x.split()
for i in range(len(x)):
    x[i]=int(x[i])
x.sort()
print(str(x[0]),str(x[v-1]))
