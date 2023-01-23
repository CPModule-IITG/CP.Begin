def ilist(): # Just to speed up I/O
  return list(map(int,input().split()))

t = int(input())
for _ in range(t):
    n,m = imap()
    l1 = ilist()
    l2 = ilist()
    for j in range(m):
        x = l1.index(min(l1)) #Finds the index with the minimum element
        l1[x] = l2[j]
    print(sum(l1))
 
