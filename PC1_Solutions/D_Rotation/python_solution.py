n,q = map(int,input().split())
s = input()

startindex = 0

for i in range(q):
    #taking the query and storing in a and b
    a,b = map(int,input().split()) 

    if a == 1:
        startindex = startindex - b
        if startindex < 0:
            #handling the case where startindex exceeds the size of string
            startindex += n
    else:
        print(s[(startindex + b - 1)%n])
