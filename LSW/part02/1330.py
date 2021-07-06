input_value=input()
a=input_value.split()
if int(a[0])>int(a[1]):
    print(">")
elif int(a[0])<int(a[1]):
    print("<")
else:
    print("==")