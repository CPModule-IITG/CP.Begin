mod = pow(10,9)+7
for _ in range(int(input())):
    a,b = map(int,input().split())
    print(pow(a,b,mod))
