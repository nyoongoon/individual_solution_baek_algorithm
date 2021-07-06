now_time=input()
now_time=now_time.split()
h=int(now_time[0])
m=int(now_time[1])-45

if m<0:
    if h==0:
        h=23
        m=60+m
    else:
        h=h-1
        m=60+m
print("%s %s"%(h,m))