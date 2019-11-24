from queue import *
from sys import stdin
input = stdin.readline

n, q = map(int, input().split())
link = [[]for i in range(n)]
for i in range(n-1):
    a, b = map(int, input().split())
    link[a-1].append(b-1)
    link[b-1].append(a-1)

weight = [0] * n
for i in range(q):
    p, x = map(int, input().split())
    weight[p-1] += x

unused = [1]*n
que = Queue()
que.put(0)
while que.qsize():
    m = que.get()
    unused[m] = 0
    for v in link[m]:
        if unused[v]:
            weight[v] += weight[m]
            que.put(v)
print(*weight)

