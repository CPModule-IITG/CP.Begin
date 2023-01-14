for _ in range(int(input())):
    n,k = map(int,input().split())
    s = input()
    l = [0 for i in range(n+1)] #construct an array with n+1 zeros. this array would later be used to store the no of W's that occured so far (i,e) ith index of L would indicate the total no of W's before s[i] including s[i]. 

    for i in range(1,n+1): # Building the prefix array
        l[i] = l[i-1] 
        if s[i-1] == 'W':
            l[i] += 1

    m = 10**6 #Assuming an arbitarily large value for m (kind of works like INT_MAX in cpp) 
    
    for i in range(n-k+1): #iterating through all subarrays
        m = min(m,l[i+k]-l[i]) #Finding the minimum m
    print(m)