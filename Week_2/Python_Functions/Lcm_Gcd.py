def gcd(a,b): #Euclid's algo //O(log(max(a,b)))//
    if b == 0:
        return a
    return gcd(b,a%b)

def lcm(a,b): 
    return a//gcd(a,b) * b # a*b/gcd(a,b) is valid too except that if you do it in some other language it might give you an int overflow .... You can use it in py tho :)

print(lcm(8,12),gcd(8,12)) #Driver code
