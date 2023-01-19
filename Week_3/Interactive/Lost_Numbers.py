import sys

# Python code to implement the above approach
def swapPositions(list, pos1, pos2):
    list[pos1], list[pos2] = list[pos2], list[pos1]
    return list

# Function to find the next lexicographically greater permutation (available at geeksForgeeks)
def nextPermutation(arr):
    n = len(arr)
    i = 0
    j = 0
    # Find for the pivot element.
    # A pivot is the first element from
    # end of sequencewhich doesn't follow
    # property of non-increasing suffix
    for i in range(n-2, -1, -1):
        if (arr[i] < arr[i + 1]):
            break
            
    # Check if pivot is not found
    if (i < 0):
        arr.reverse()

    # if pivot is found
    else:
        # Find for the successor of pivot in suffix
        for j in range(n-1, i, -1):
            if (arr[j] > arr[i]):
                break

        # Swap the pivot and successor
        swapPositions(arr, i, j)
        
        # Minimise the suffix part
        # initializing range
        strt, end = i+1, len(arr)

        # Third arg. of split with -1 performs reverse
        arr[strt:end] = arr[strt:end][::-1]

# use flush operation everytime you query something

prod = []

print("? 1 2")
sys.stdout.flush()
temp = int(input())
prod.append(temp)

print("? 2 3")
sys.stdout.flush()
temp = int(input())
prod.append(temp)

print("? 3 4")
sys.stdout.flush()
temp = int(input())
prod.append(temp)

print("? 4 5")
sys.stdout.flush()
temp = int(input())
prod.append(temp)

v = [4, 8, 15, 16, 23, 42]

good = True

while(True):
    good = True
    for i in range(4):
        good &= (v[i]*v[i+1] == prod[i])
    if(good):
        break
    else:
        nextPermutation(v)

print("! ")
for i in range(6):
    print(v[i],end=" ")
print()
sys.stdout.flush()

