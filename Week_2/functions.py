import math
mod = pow(10,9)+7
############################################### Number Theory #########################################################
 
def is_pow2(x): #Checks if a number is a power of 2 // O(1) //
    return max(1-(x&(x-1)),0)
 
def lgcd(l): # Returns gcd of a list // O(nlog(n)) //
    a = 0
    for i in l:
        a = math.gcd(a,i)
    return a
 
def SieveOfEratosthenes(num): # Returns an array with Prime numbers upto num // O(nlog(log(n))) //
    prime = [True for i in range(num+1)]
    Highest_Prime = [0 for i in range(num+1)] # Returns an array with the highest prime factor of each i between 0 and Num
    Lowest_Prime = [0 for i in range(num+1)] # Returns an array with the lowest prime factor of each i between 0 and Num
    prime[0] = prime[1] = False
    p = 2
    while (p <= num):
        if (prime[p] == True):
            Lowest_Prime[p] = p
            Highest_Prime[p] = p
            for i in range(2*p, num+1, p):
                prime[i] = False
                Highest_Prime[i] = p
                if Lowest_Prime[i] == 0:
                    Lowest_Prime[i] = p
        p += 1
    # print(prime,'\n',Highest_Prime,'\n',Lowest_Prime)         #Checker
    # return Lowest_Prime
    # return Highest_Prime
    return prime
 
def PrimeFactors(num,Prime_array):# Returns a dictionary with prime factors mapped with their respective powers // O(nlogn) //
   
    # COmplexity is O(logn) for this code, but this requires that u have a Prime array which could be highest or lowest prime which can be calculated from the prev Sieve of Erastothenes) hence over complexity is O(nlogn)
   
    d = {}
    while num != 1:
        x = Prime_array[num]
        d[x] = d.get(x,0)+1
        num//=x
    return d
 
def facotrization(n):  #returns a dict with prime factors and their powers for a given number in // O(sqrt(n)) //
    #Use this approach if you don't have a prime array
   
    d = {}
    x = 2
    while x*x<=n:
        while n%x == 0:
            d[x] = d.get(x,0)+1
            n//=x
        x += 1
    if n>1:
        d[n] = d.get(n,0)+1
    return d
 
def ETF(d):
    #d is the dict contaiing prime factors
    s = 0
    for i in d:
        s += pow(i,d[i]-1)*(i-1)
    return s
 
################################################## Combinatorics ############################################################
 
def fact(n,mod):  #Returns the factorial of all numvers from 1 to  n % mod
    f = [1]
    for i in range(1,n+1):
        f.append((f[i-1]*i%mod)%mod)
    return f
 
def dearrange(n,mod): #Returns an array containing the dearragements of all numbers from 1 to n % mod
    if mod == -1:
        dearr = [1,0]
        for i in range(2,n+1):
            dearr.append((i-1)*(dearr[i-1]+dearr[i-2]))
    else:
        dearr = [1,0]
        for i in range(2,n+1):
            dearr.append(((i-1)%mod*(dearr[i-1]+dearr[i-2])%mod)%mod)
    return dearr
