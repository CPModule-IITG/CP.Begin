def ilist():
  return list(map(int,input().split()))

t = int(input())
for _ in range(t):
    n = int(input())
    la = ilist()
    lb = ilist()
    print(sum(la)+sum(lb)-max(lb))
