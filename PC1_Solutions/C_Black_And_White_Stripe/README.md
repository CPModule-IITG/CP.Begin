[Black And White Stripes](https://codeforces.com/problemset/problem/1690/D)

Essentially we plan to look into all the possible contigious subarrays of size $k$ and find how many W's we need to change to convert all of them to B's. To do this, we can simply go through all subarrays which we do by applying a loop from $0$ to $n-k+1$ .

(Assuming 1-based indexing)
But we can't go through every sub array everytime to count the number of W's right....instead we pre count the W's as a prefix sum array. The i-th index of the array will store the no of W's upto $s[i]$.

Hence, the number of W's in the subarray 2 to 5 would be $pref[5]-pref[1]$ (as $pref[1] =$ no of W's till $s[1]$ and $pref[5]$ = no of W's till $s[5]$)

Now, we just find the number of W's needed to be replaced = no of W's in the subarray of size $k$ . We find this value for each subarray and then print the minimum of it :)