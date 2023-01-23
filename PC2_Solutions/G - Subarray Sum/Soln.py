def f(x,l,s): # The checker function to check if it can be done to get s ones or not
    for i in range(x+1):
        if l[-(x+1-i)]-l[i]<=s:
            return True
    return False
            

for _ in range(int(input())):
    n,s = map(int,input().split())
    l = list(map(int,input().split()))
    
    x = sum(l)
    if s>x: # Impossible to get the required sum.
        print(-1)
        continue
    elif s == x: # The case where no operation is required as we already have the required sum. 
        print(0)
        continue

    p = [0]
    for i in range(n):
        p.append(p[i]+l[i])
    # print(p)
    
    l = 0
    r = n  # Applying Binary search on answer
    while l<=r:
        mid = (l+r)//2
        if (f(mid,p,s)):
            if f(mid-1,p,s):
                r = mid-1
            else:
                break
        else:
            l = mid+1
    print(mid)
        
