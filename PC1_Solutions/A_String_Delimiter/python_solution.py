n = int(input())
s = input()
cnt = 0
l = []

for i in range(n):
    # Checking for the starting "
    if s[i] == '"':  
        cnt += 1
        
    # We only care about ','
    if s[i] == ',':  

        # if cnt is even, it would mean there have been even no of "s which means that the current ',' isn't enclosed
        if cnt%2 == 0: 
            l.append('.') # Hence we change it to '.'
        else:
            l.append(',') 
    else:
        l.append(s[i]) # as previously stated said, we only care about ','

# .join joins all the individual characters in the list. We use this mmethod as strings are immutable plus this method does in //O(n)//  
print(''.join(l)) 