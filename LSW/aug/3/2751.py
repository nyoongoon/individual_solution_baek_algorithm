#! /opt/homebrew/bin/python3.9

def merge_sort(data):
    if len(data) < 2:
        return data
    mid = len(data)//2
    lower = merge_sort(data[:mid])
    upper = merge_sort(data[mid:])

    merged_array = list()
    l = u = 0
    while l < len(lower) and u < len(upper):
        if lower[l] < upper[u]:
            merged_array.append(lower[l])
            l += 1
        else:
            merged_array.append(upper[u])
            u += 1
    merged_array += lower[l:]
    merged_array += upper[u:]

    return merged_array
