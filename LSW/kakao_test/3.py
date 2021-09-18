from datetime import timedelta
import math


def time_check(time_list):
    time_count = 0
    for i in range(0, len(time_list)-1, 2):
        in_time = int(time_list[i].split(':')[0])*60 + \
            int(time_list[i].split(':')[1])
        out_time = int(time_list[i+1].split(':')[0]) * \
            60+int(time_list[i+1].split(':')[1])
        time_count += out_time-in_time
    return time_count


def solution(fees, records):
    answer = []
    user_dict = dict()
    for i in records:
        i = i.split()
        if i[1] not in user_dict.keys():
            user_dict[i[1]] = [i[0]]
        else:
            user_dict[i[1]].append(i[0])
    sorted_keys = list(user_dict.keys())
    sorted_keys.sort()
    for i in sorted_keys:
        if len(user_dict[i]) % 2 == 1:
            user_dict[i].append('23:59')
        user_dict[i] = time_check(user_dict[i])
        if user_dict[i] <= fees[0]:
            answer.append(fees[1])
        else:
            answer.append(
                fees[1]+math.ceil((user_dict[i]-fees[0])/fees[2])*fees[3])
    return answer


fees = [180, 5000, 10, 600]
records = ["05:34 5961 IN", "06:00 0000 IN", "06:34 0000 OUT", "07:59 5961 OUT",
           "07:59 0148 IN", "18:59 0000 IN", "19:09 0148 OUT", "22:59 5961 IN", "23:00 5961 OUT"]
print(solution(fees, records))
