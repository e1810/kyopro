n, d = map(int, input().split())
ans = 0
for i in range(n):
    x, y = map(int, input().split())
    ans += ((x**2+y**2)**0.5 <= d)
print(ans)
