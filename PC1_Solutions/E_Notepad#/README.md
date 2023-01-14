[Notepad](https://codeforces.com/problemset/problem/1766/B)

Think about it...why has it been asked id it os possible to print it in less than n operations instead of the general "Print the min no of operations".... 
    
When would this be possible ?  
When we can use atleast one append operation on atleast a two letter phrase right? 

So our question simply translates to find out if there exists atleast one two-letter phrase that repeats atleast twice in the string. 

How to do this? 
Just add all the two character phrases in a array and a set. A set wouldn't allow duplicate elements. So if even one of the phrases repeated, the length of set would be less than that of array. 

Remember to also avoid cases like "hhh" given in the testcases