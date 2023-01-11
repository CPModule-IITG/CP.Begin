def factorization(n):  #returns a dict with prime factors and their powers for a given number in // O(sqrt(n)) // 
    d = {}
    x = 2
    while x*x<=n: #Iterating till sqrt(n)
        while n%x == 0: 
            d[x] = d.get(x,0)+1 # d.get(x,0) returns d[x] if x exists and 0 if x doesn't .
            n//=x
        x += 1
    if n>1: # to count the last prime number
        d[n] = d.get(n,0)+1
    return d 

print(factorization(168)) #Driver code
