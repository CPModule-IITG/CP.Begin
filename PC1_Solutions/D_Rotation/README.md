[Rotation](https://atcoder.jp/contests/abc258/tasks/abc258_c?lang=en)

The problem statement asks to “remove the last character of S and prepend it,” but 
if this operations is naively performed $x$ times, it will cost an O( $nq$ ) time complexity .
If we analyze the worst case possibility of $nq$ , as $N <= 5 \times 10^5$ and $Q <= 5 \times 10^5$ , $nq <= 25 \times 10^{10}$

A c++ code will take around 1 second to execute a code with time complexity upto $10^7$ .
As the worst case possibility of $nq$ is around $10^10$ it is 1000 times more than $10^7$ hence it does not fit in the execution time limit under the given constraints, so we will have to use a more optimized approach :) !

For simplicity, we will use zero-based index for S.

Maintain a variable $startindex$ which will store the current index from where the string
will start . For example if the string is "shrivathsa" and we apply the operation "1 2" , the final
string should be sashrivath which means we can shift the startindex to $n-2$ , and the string from $n-2, n-1, 0, 1, 2 .... n-3$ will represent "sashrivath" .

Hence, whenever an operation `1 x` is given we change $startindex$ to $startindex - x$
if this value goes below zero we add the size of string to startindex so it will start from
the other end again .

Now, whenever we get a query `2 x` , we will have to output the $x-1$ th string from the 
startindex as the questing uses 1-based indexing .
Observe that $startindex + b - 1$ can be more than size of the given string, hence we
output the  $( startindex + b - 1 )\mod n$ index character in the given string, which ensures 
that if the required character's index goes beyond the size we again start from zero .
​
Thus, the problem will be solved in a much fast way than before !