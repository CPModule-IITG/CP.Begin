for _ in range(int(input())):
    n = int(input())
    rowone = input()
    rowtwo = input()

    s = []

    for i in range(n):
        x = 0
        if len(s) != 0 :
            x = s[-1]
        y = 0
        if rowone[i] == 'B' :
            y = 1
        if rowtwo[i] == 'B' and rowone[i] == 'W':
            y = 2
        if rowtwo[i] == 'B' and rowone[i] == 'B':
            y = 3
        if x!=0 :
            if x == 3 and y == 3:
                s.pop()
            else:
                s.append(y)
        else:
            s.append(y)
            
    check = 1
    prev = 0
    if(len(s) != 0):
        prev = s[-1]
        s.pop()

    while(len(s) != 0):
        curr = s[-1]
        s.pop()
        if prev == 3:
            prev = curr
        if curr == 3:
            if prev == 1:
                prev = 2
            else: 
                prev = 1
        else:
            if prev != curr:
                check = 0
                break

    if check == 1:
        print("YES")
    else:
        print("NO")

