input_value=int(input())
result=list()
for i in range(input_value):
    v=input()
    v=v.split()
    result.append(int(v[0])+int(v[1]))
for i in result:
    print(i)