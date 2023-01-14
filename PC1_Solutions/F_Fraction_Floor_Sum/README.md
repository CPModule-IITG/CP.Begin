[Fraction Floor Sum](https://atcoder.jp/contests/abc230/tasks/abc230_e?lang=en)

The problem statement requires us to find for a given integer $N$ , the value of $[\frac{N}{1}]+[\frac{N}{2}]+[\frac{N}{3}]+...[\frac{N}{N}]$ where $[]$ represents the greatest integer function or the floor function

Note that $[\frac{N}{i}]$ will always lie between $1$ to $N$ for every $i$ from $1$ to $N$

Now looking at the constraints given for the problem, we are given $N <= 10^12$, so we can not naively calculate the value of $[\frac{N}{i}]$ for all $i$ from $1$ to $N$ and add it to find the sum

So let us break the sum into two cases by assuming $k = \sqrt{N}$
Now for all $j$ from $1,2,3...k$ let us find the number of i such that $[\frac{N}{i}] = j$,that is, $j <= \frac{N}{i} < j+1$ or $\frac{N}{j+1} <= i < \frac{N}{j}$, so the number of such integers $i$ wil be $[\frac{N}{j}]-[\frac{N}{j+1}]$

Now considering the other case when $[\frac{N}{i}] > k$
In this case, $\frac{N}{i} >= k+1$ , so $i <= \frac{N}{k+1}$. Since $k = \sqrt{N}$ this indicates $i < \sqrt{N}$ ,that is there are atmost $\sqrt{N}$ such positive integers , which can be summed up one by one within time constraint

so the overall sum can be expressed as

$$
\sum_{i=1}^k k*\left([\frac{N}{i}] - [\frac{N}{i+1}]  \right) + \sum_{i=1}^[\frac{N}{k+1}]\left([\frac{N}{i}]\right)
$$

Both of these sums can be computed in O($\sqrt{N}$), so the problem has been solved
