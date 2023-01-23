There are many ways to approach this problem. I have discussed one of them here.

When will we not be able to obtain the desired sum? 
when the sum of the present array is less than s. Hence output -1 in this case.

Now that we have done this, we know that for the remaining cases, the answer will exist and will be between 0 to n (cuz u can delete no elements in the least or
all elements at max) Also, Lets say we cannot achieve the required sum in m operations, this would imply that we can't do it in m-1 operations either. So we can
eliminate a part of the answer just by looking at the conditions....doesn't this remind you of some algorithm? 

Yes, so we will be using binary search on answer to solve the question. Using binary search we will check if for any m between 0 and n, is it possible to attain 
the required sum. Choose n//2 first. Now how do we check if we can attain the sum in n//2 moves? 

So the number of deletions from front + number of deletions from back = n//2. Now jist iterate on all possibilities of removals. (i,e) if we run i from 0 to n//2,
we could use i to refer to the number of deletions from the start and n//2-i will be the deletions from back. Count the number of ones deletd and check the conidition
for s. If n//2 moves doesn't satisfy the condition, we for sure know that any move less than n//2 won't, so apply binary search on the n//2 to n interval now and apply
the same operation. If say n//2 does satisfy the condition, check if n//2-1 also satisfies the condition. if it does, apply the operation on the interval 0 to n//2-1.
else, the answer will be n//2 itself as it is the minimum number of moves.

Complexity: O(nlogn)
