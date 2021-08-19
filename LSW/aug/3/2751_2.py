#v = int(input())
#array = list()
# for i in range(v):
#    a = int(input())
#    array.append(a)

# for i in sorted(array):
#    print(i)

N = int(input())
num = []

for i in range(N):
    num.append(int(input()))

num = sorted(set(num))

for i in num:
    print(i)
