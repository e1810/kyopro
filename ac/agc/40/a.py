s = input()
l = len(s)
prev = s[0]
a = []
cnt = 0
for i in range(l):
    if s[i] != prev:
        a.append(cnt)
        prev = s[i]
        cnt = 0
    cnt += 1
a.append(cnt)
if s[0]=="<": a = [0]+a
for i in range(len(a)-1): a[i+1] += a[i]
a = a[::2]

b = [0] * (l+1)
s = "=" + s + "="
for i in a:
    bi = 0
    while s[i-bi]==">":
        b[i-bi-1] = max(b[i-bi-1], b[i-bi]+1)
        bi += 1
    bi = 0
    while s[i+bi+1]=="<":
        b[i+bi+1] = max(b[i+bi+1], b[i+bi]+1)
        bi += 1
print(sum(b))
