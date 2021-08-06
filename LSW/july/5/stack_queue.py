#! /opt/homebrew/bin/python3.9
# 내장 함수
# 여러가지 자료형들이 유용하게 사용할 수 있는 기능들이 미리 구현되어 내장되어 있다.

# stack=list()``
stack = []

# push
for i in range(0, 10):
    stack.append(i)
    print(stack)

# stack pop
for i in range(0, 10):
    stack.pop(0)
    print(stack)
