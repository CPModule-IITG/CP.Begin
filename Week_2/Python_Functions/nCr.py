mod = pow(10,9)+7

def fact(n,mod):  #Returns the factorial of all numvers from 1 to  n % mod
    f = [1]
    for i in range(1,n+1):
        f.append((f[i-1]*i%mod)%mod)
    return f

fact_array = fact(100,mod) # An array where Ai contains i! 

def ncr(n,r,mod):
    numerator = fact_array[n]
    denominator = (fact_array[r]*fact_array[n-r])%mod
    modulo_denominator = pow(denominator,mod-2,mod) #Module inverse formula using etf (This works only when mod is prime ! )
    ans = (numerator*modulo_denominator)%mod #modulo multiplication
    return ans

#Driver codes
print(fact_array[5]) 
print(ncr(8,3,mod))
