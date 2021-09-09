round = int(input())
score_list = list()

for i in range(round):
    ox_input = list(map(list, input().split()))
    ox_list = ox_input[0]
    j = 0
    o_count = 0
    total = 0
    while len(ox_list) > j:
        if ox_list[j] == 'O':
            o_count += 1
        elif ox_list[j] == 'X':
            total = int(total+(o_count*(o_count+1)/2))
            o_count = 0
        if j+1 == len(ox_list) and ox_list[j] == 'O':
            total = int(total+(o_count*(o_count+1)/2))
        j += 1
    score_list.append(total)
for i in score_list:
    print(i)
