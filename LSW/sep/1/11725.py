#! /opt/homebrew/bin/python3.9
import sys
from collections import deque

input = sys.stdin.readline

n = int(input())
graph = [[] for _ in range(n + 1)] # [[],[2,3],[4,5],[6,7],[],[]...]
# index의 값은 node의 값 0은 비어있음 node는 index, 그 index에 있는 list는 child node
parent = [0 for _ in range(n + 1)]

for _ in range(n - 1):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)


def dfs():
    stack = deque()
    stack.append(1)
    while stack:
        node = stack.pop()
        for i in graph[node]:
            if parent[i] == 0:
                parent[i] = node
                stack.append(i)
    return parent


dfs()
for i in parent[2:]:
    print(i)
