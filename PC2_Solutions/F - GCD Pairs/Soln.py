t = int(input())
for _ in range(t):
    n = int(input())
    l = ilist()
    if n == 1 or n == 2:
        print("Yes")
        continue
    p = []
    for i in range(n-2):
        if l[i+1]%gcd(l[i],l[i+2]) != 0:
            print("NO")
            break
    else:
        print('Yes')
