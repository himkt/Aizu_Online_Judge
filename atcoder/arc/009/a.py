# -*- coding: utf-8 -*-

N = int(input())
c = 0

for _ in range(N):
    a, b = map(int, input().split())
    c += (a*b)

print(int(c * 1.05))
