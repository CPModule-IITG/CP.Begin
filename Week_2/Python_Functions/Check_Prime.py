mod = pow(10,9)+7

def check_prime(n): #Returns True if the number is prime. 
    i = 2
    if n <= 1:
        return False
    while i*i<=n: # Checks all elements from 2 to sqroot(n)
        if n%i == 0:
            return False # Since this would mean there is a factor other than 1 and n (not prime)
        i += 1
    return True

print(check_prime(10**9+8)) #driver code
