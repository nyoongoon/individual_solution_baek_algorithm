v=input()
v=v.split()
v2=input()
v2=v2.split()
result=''

for i in v2:
    if int(i)<int(v[1]):
        result=result+i+' '
print(result)