def solution(n, info):
    answer = [0]*11
    apeach_score = 0
    info.reverse()
    for i in range(len(info)-1, -1, -1):
        if info[i] != 0:
            apeach_score += i
    return answer


n1 = 5
n2 = 1
n3 = 9
n4 = 10
info1 = [2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0]
info2 = [1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
info3 = [1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
info4 = [0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 3]
print(solution(n1, info1))
