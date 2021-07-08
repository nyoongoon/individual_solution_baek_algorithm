
input_value=input()
input_value=input_value.split()

A=int(input_value[0])
B =int(input_value[1])
C =int(input_value[2])
count=0
total=A
total_sale=0

while(1):
    if B>C:
        count=-1
        break
    count=count+1
    total=A+(count*B)
    total_sale=count*C
    if total<total_sale:
            break

print(count)