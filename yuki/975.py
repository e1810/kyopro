x, n, m= map(int,input().split())
a = map(int, input().split())
b = map(int, input().split())
mr = (list(a).count(x)!=0)
val = (list(b).count(x)!=0)
if mr and val: print("MrMaxValu")
elif mr and not val: print("MrMax")
elif not mr and val: print("MaxValu")
else: print("-1")
