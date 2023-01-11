mod = pow(10,9)+7

def bin_exp(a,b,mod): #Returns (a^b) mod m where 0 <= a,b <= 10^18 // O(log(b)) //
    ans = 1
    a %= mod
    while b:
        if b&1:
            ans = (ans*a)% mod
        a = (a*a)%mod
        b >>= 1
    return ans

print(bin_exp(10,2000,mod)) #driver code

# print(pow(10,2000,mod)) will also give the same result as the inbuilt pow function follows the same binary exponentiation :)
