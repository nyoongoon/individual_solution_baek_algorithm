#! /opt/homebrew/bin/python3.9

def stars(n):  # star list의 별모양을 입력값으로 받음, 처음 들어오는 입력값의 len == 3
    matrix = []
    for i in range(3 * len(n)):  # range : 9 1 1 2 3 4 5 6 7 8 9
        if i // len(n) == 1:  # i가 9일 때
            matrix.append(n[i % len(n)] + " " * len(n) + n[i %
                          len(n)])  # append되는 값은 중간에 빈 것
        else:  # i가 9가 아닐 때
            matrix.append(n[i % len(n)] * 3)  # append되는 값은 중간이 찬 것 곱하기 3
    return(list(matrix))  # 완성된 matrix 를 return


star = ["***", "* *", "***"]  # 기본 모양, v=1과 같음
# ***
# * *
# ***
v = int(input())  # input
k = 0  # 반복 횟수
while v != 3:  # 반복횟수 구하기 위해 3으로 제곱나눔
    v = int(v / 3)
    k += 1

for i in range(k):  # 반복횟수만큼 stars 함수에 인자로 star 넣어 반복, return된 값은 star에 저장 후 그 값으로 다시 반복
    star = stars(star)
for i in star:  # 위 반복문을 통해 완성된 star를 한줄씩 출력
    print(i)
