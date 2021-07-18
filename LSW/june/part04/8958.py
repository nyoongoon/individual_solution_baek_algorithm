round=int(input())
score_list=list()

for i in range(round):
    OX_count=input()
    score=0
    count=0
    for j in range(len(list(OX_count))):
        if OX_count[j]=='0':
            count=count+1
            score=score+count
        else:
            count=0
    score_list.append(score)

for i in score_list:
  print(i)