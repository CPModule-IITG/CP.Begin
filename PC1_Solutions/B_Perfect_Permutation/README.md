[Perfect Permutation](https://codeforces.com/problemset/problem/233/A)

1. If $n$ is odd, there won't be a solution and we will print -1, try to prove it intuitively on your own :)

2. If $n$ is even, we simply print the pattern 2 1 4 3 6 5 8 7 ...

(Assume 1-based indexing)

Now at,

index 1 -> $ p[p[1]] = p[2] = 1$                                
index 2 -> $ p[p[2]] = p[1] = 2$           
index 3 -> $ p[p[3]] = p[4] = 3$         
and so on ... 

Hence, the property $p[p[i]] = i$ is satisfied for all indexes.

