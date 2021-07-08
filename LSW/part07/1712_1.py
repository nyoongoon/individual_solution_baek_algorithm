input_value=input()
input_value=input_value.split()

A=int(input_value[0])
B =int(input_value[1])
C =int(input_value[2])

if B > C:
    print(-1)
else:
    print((A/(C-B))+1)