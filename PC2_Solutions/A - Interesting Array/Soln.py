t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int,input().split()))
    a = min(l)
    b = max(l)
    if len(set(l)) == 1:
        print((n-1)*n)
    else:
        print(l.count(a)*l.count(b)*2)
