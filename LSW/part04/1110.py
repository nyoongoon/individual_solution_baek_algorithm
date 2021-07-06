input_value=int(input())
c=input_value
count=0

while(1):
    if c<0:
        a=0
        b=c
    else:
        a=c//10
        b=c%10
        c=a+b
    if c<10:
        c=(10*b)+c
    else:
        c=(10*b)+c%10

    count=count+1
    if c==input_value:
        break

print(count)