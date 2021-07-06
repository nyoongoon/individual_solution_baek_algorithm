#! /opt/homebrew/bin/python3.9

input_value=input()
input_value=input_value.split()
A=int(input_value[0])
B=int(input_value[1])
C=int(input_value[2])
print((A+B)%C)
print(((A%C) + (B%C))%C)
print((A*B)%C)
print(((A%C) * (B%C))%C)