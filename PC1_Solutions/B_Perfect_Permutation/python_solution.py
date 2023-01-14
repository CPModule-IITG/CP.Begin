n = int(input())
if n%2 == 1: 
    print(-1)
else:
    for i in range(1,n//2+1):
        print(2*i,2*i-1,end = ' ') 