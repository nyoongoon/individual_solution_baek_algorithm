va=list()
gop=0
result=[0,0,0,0,0,0,0,0,0,0]
for i in range(0,3):
    v=int(input())
    va.append(v)
gop=str(va[0]*va[1]*va[2])

for i in range(len(gop)):
    if gop[i]=='0':
        result[0]=result[0]+1
    elif gop[i]=='1':
        result[1]=result[1]+1
    elif gop[i]=='2':
        result[2]=result[2]+1
    elif gop[i]=='3':
        result[3]=result[3]+1
    elif gop[i]=='4':
        result[4]=result[4]+1
    elif gop[i]=='5':
        result[5]=result[5]+1
    elif gop[i]=='6':
        result[6]=result[6]+1
    elif gop[i]=='7':
        result[7]=result[7]+1
    elif gop[i]=='8':
        result[8]=result[8]+1
    elif gop[i]=='9':
        result[9]=result[9]+1
for i in result:
    print(i)