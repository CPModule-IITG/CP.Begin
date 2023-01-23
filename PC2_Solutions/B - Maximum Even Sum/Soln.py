n = int(input())
l = list(map(int,input().split()))
l_eve,l_odd = [],[]
for i in l:
  if (i%2==1):
    l_odd.append(i)
  else:
    l_eve.append(i)
 
m1,m2 = -1,-1
if len(l_eve) >= 2:
  l_eve.sort()
  m1 = l_eve[-1]+l_eve[-2]
if len(l_odd) >= 2:
  l_odd.sort()
  m2 = l_odd[-1]+l_odd[-2]
 
if m1 == m2 == -1:
  print(-1)
else:
  print(max(m1,m2))
