for _ in range(int(input())):
    n = int(input())
    s = input()

    l = []
    i = 0 
    while i<n-1:

        dummy = s[i]+s[i+1] 
        l.append(dummy) #Adding the phrases to list
        if i<n-2 and s[i+2] == s[i+1] == s[i]: # To avoid the 3-same-letter case 
            i += 2
        else:
            i += 1

    if len(set(l)) == len(l): # Checking for distinct elements
        print("NO")
    else:
        print("YES")