[Fraction Floor Sum](https://atcoder.jp/contests/abc230/tasks/abc230_e?lang=en)

The problem statement requires us to find for a given integer $N$ , the value of $\left[\frac{N}{1}\right]+\left[\frac{N}{2}\right]+\left[\frac{N}{3}\right]+...\left[\frac{N}{N}\right]$ where $[]$ represents the greatest integer function or the floor function

Note that $\left[\frac{N}{i}\right]$ will always lie between $1$ to $N$ for every $i$ from $1$ to $N$

Now looking at the constraints given for the problem, we are given $N <= 10^{12}$, so we can not naively calculate the value of $\left[\frac{N}{i}\right]$ for all $i$ from $1$ to $N$ and add it to find the sum

So let us break the sum into two cases by assuming $k = \sqrt{N}$
Now for all $j$ from $1,2,3...k$ let us find the number of i such that $\left[\frac{N}{i}\right] = j$,that is, $j <= \frac{N}{i} < j+1$ or $\frac{N}{j+1} <= i < \frac{N}{j}$, so the number of such integers $i$ wil be $\left[\frac{N}{j}\right]-\left[\frac{N}{j+1}\right]$

Now considering the other case when $\left[\frac{N}{i}\right] > k$
In this case, $\frac{N}{i} >= k+1$ , so $i <= \frac{N}{k+1}$. Since $k = \sqrt{N}$ this indicates $i < \sqrt{N}$ ,that is there are atmost $\sqrt{N}$ such positive integers , which can be summed up one by one within time constraint

so the overall sum can be expressed as

$$
\sum_{i=1}^k i \times \left(\left[\frac{N}{i}\right] - \left[\frac{N}{i+1}\right]  \right) + \sum_{i=1}^\left[\frac{N}{k+1}\right]\left(\left[\frac{N}{i}\right]\right)
$$

Both of these sums can be computed in O( $\sqrt{N}$ ), so the problem has been solved
