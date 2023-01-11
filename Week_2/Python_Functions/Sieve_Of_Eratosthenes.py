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
            for i in range(2*p, num+1, p): # For a given number p, you basically iterate through its multiples and mark them non prime as one of their factors is p itself
                prime[i] = False
                Highest_Prime[i] = p
                if Lowest_Prime[i] == 0:
                    Lowest_Prime[i] = p
        p += 1
    # return Lowest_Prime #An array containing the lowest prime factors of all numbers till num

    # return Highest_Prime # An array containing the highest prime factors of all numbers till num

    # return prime # An array with boolean values indicating if the number is prime/not prime
    p = []
    for i in range(num+1):
        if prime[i]:
            p.append(i)
    return p # An array with just prime numbers till the given number

    #You can uncoment the other return statements to see what they would print and use them accordingly during a contest!

print(SieveOfEratosthenes(29)) # Driver code
