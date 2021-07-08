v1=int(input())
slist=list()
sum=0
score=input()
score=score.split()
for j in score:
    slist.append(int(j))

slist.sort()
max=slist[-1]
for i in range(len(slist)):
    slist[i]=(slist[i]/max)*100
    sum=sum+slist[i]

print(sum)
avg=sum/len(slist)
print(avg)