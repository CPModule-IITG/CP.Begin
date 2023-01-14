for _ in range(int(input())):
    n,k = map(int,input().split())
    s = input()

    m = 10**6 #Assuming an arbitarily large value for m (kind of works like INT_MAX in cpp) 
    temp = 0
    for i in range(n-k+1): #iterating through all subarrays
        if i == 0:
            for j in range(k):
                if s[j] == "W":
                    temp+=1
        else:
            if s[i-1] == "W":
                temp-=1
            if s[i+k-1] == "W":
                temp+=1
        m = min(m,temp) #Finding the minimum m

    print(m)