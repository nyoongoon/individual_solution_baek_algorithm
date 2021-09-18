def solution(id_list, report, k):
    answer = []
    report_dict = dict()  # {key1:value1, key2:value2 . . . }
    report_count = [0]*len(id_list)  # [0,0,0,0]
    for i in id_list:
        report_dict[i] = []  # {muzi : [] , frode : [] . . .}
    for i in set(report):
        i = i.split()  # ['muzi','frodo']
        # {muzi : [frodo neo] , frode : [] . . .}
        report_dict[i[0]].append(i[1])
        find_count = id_list.index(i[1])
        report_count[find_count] += 1
    for i in range(len(report_count)):
        if report_count[i] >= k:
            report_count[i] = id_list[i]
        else:
            report_count[i] = '0'
    for i in list(report_dict.keys()):
        answer_count = 0
        for j in report_dict[i]:
            if j in report_count:
                answer_count += 1
        answer.append(answer_count)

    return answer


id_list = ["muzi", "frodo", "apeach", "neo"]
# [0 1 2 3]
# [0 frodo '0' 'neo' ]
report = ["muzi frodo", "apeach frodo", "frodo neo", "muzi neo",
          "apeach muzi"]  # muzi frodo muzi frodo muzi frodo
k = 2
print(solution(id_list, report, k))
