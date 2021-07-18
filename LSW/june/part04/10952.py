result=list()
 
while(1):
    input_value=input()
    if input_value=='0 0':
        break
    input_value=input_value.split()
    plus=int(input_value[0])+int(input_value[1])
    result.append(plus)

for i in result:
    print(i)