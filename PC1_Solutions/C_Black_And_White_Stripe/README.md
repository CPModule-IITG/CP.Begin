[Black And White Stripes](https://codeforces.com/problemset/problem/1690/D)

#Assuming 0-based indexing

Essentially we plan to look into all the possible contigious subarrays of size $k$ and find how many W's we need to change to convert all of them to B's. To do this, we can simply go through all subarrays which we do by applying a loop from $0$ to $n-k+1$ .

But we can't go through every sub array everytime to count the number of W's right.....what we can do is for the first subarray of length k, we will calculate the total no of W's and for the immediate next array we can get the count of W's by checking next index's value (if it is W add 1 to the sum ) and removing 1 from count if the first element of previous array was W .

Now, we just find the number of W's needed to be replaced = no of W's in the subarray of size $k$ . We find this value for each subarray and then print the minimum of it :)