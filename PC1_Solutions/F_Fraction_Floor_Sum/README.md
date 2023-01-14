[Fraction Floor Sum](https://atcoder.jp/contests/abc230/tasks/abc230_e?lang=en)

The problem statement requires us to find for a given integer N , the value of [N/1]+[N/2]+[N/3]+...[N/N] where [] represents the greatest integer function or the floor function

Note that [N/i] will always lie between 1 to N for every i from 1 to N

Now looking at the constraints given for the problem, we are given N<=10^12, so we can not naively calculate the value of [N/i] for all i from 1 to N and add it to find the sum

So let us break the sum into two cases by assuming k=sqrt(N)
Now for all j from 1,2,3...k let us find the number of i such that [N/i]=j,that is, j <= N/i < j+1 or N/(j+1) <= i < N/j, so the number of such integers i wil be ([N/j]-[N/(j+1)])

Now considering the other case when [N/i]>k
In this case, N/i >= (k+1), so i <= (N/(k+1)). Since k=sqrt(N) this indicates i<sqrt(N),that is there are atmost sqrt(N) such positive integers , which can be summed up one by one within time constraint

so the overall sum can be expressed as 
summation from 1 to k (k*([N/k]-[N/(k+1)]])) + summation from 1 to [N/(k+1)]*([n/i])

Both of these sums can be computed in O(sqrt(N)), so the problem has been solved