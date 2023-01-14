import math
n = int(input())
k = int(math.sqrt(n))

# Finding out k=sqrt(n) using a for loop
# for i in range(1,n+1):
#     if i*i <= n :
#         k = i
#     else:
#         break

ans = 0; 

# Calculating the first sum that is for [N/i]<=k
for i in range(1,k+1):
    ans += ((n // i) - (n // (i + 1)))*i

#Calculating the second sum that is for [N/i]>k
for i in range(1,n//(k+1) + 1):
    ans += (n // i)
	
print(ans)