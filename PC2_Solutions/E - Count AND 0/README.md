Lets approach the question step by step. 

When will the and of all numbers be 0? This will happen only if there is atleast one 0 in every bit right? ... like the first bit of some number out of all numbers is 0 would mean that the and of all these numbers would have a zero at the first bit. So essentially, if we represent all numbers in binary, we must make sure that atleast one number has a 0 in ith bit for all i between 1 to k Eg:
a - 01100
b - 10101
c - 00101
d - 11011 

And of these is 00000 here the LSB is zero because of a, 2nd LSB is zero because of a,b and c, 3rd LSB is zero because of d... and so on

When will the sum be maximum? When there are as many ones as possible in the binary representation right...So we must try to maximise the number of ones keeping the previous condition of zeros in mind. So essentially we arrive to a conclusion that each bit among all numbers must have exactly one zero. So the and is 0 and the sum is max as well.

Eg: for n = 4 and k = 5
10011
01111
11110
11101

This would have a maximum sum & and is 0.
Essentially this would mean that any one of n numbers should have their kth bit as zero for all k. which is nC1 * nC1 *...K times. which is n^k. Now use binary exponentiation to solve this.
