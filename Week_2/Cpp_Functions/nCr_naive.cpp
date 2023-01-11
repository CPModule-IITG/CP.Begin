#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

/** Computes nCr mod p using naive recursion */
/** Time Complexity : 2^n */
ll binomial(ll n, ll r, ll p) {
	if (r == 0 || r == n) {
		return 1;
	}
	return (binomial(n - 1, r - 1, p) + binomial(n - 1, r, p)) % p;
}

/** Computes nCr mod p using dynamic programming */
/** Time Complexity : n^2 */
ll dp_binomial(ll n, ll r, ll p) {
	// dp[i][j] stores iCj
	vector<vector<ll>> dp(n + 1, vector<ll> (r + 1, 0));
	
	// base cases described above
	for (ll i = 0; i <= n; i++) {
		/*
		 * i choose 0 is always 1 since there is exactly one way 
		 * to choose 0 elements from a set of i elements 
		 * (don't choose anything)
		 */
		dp[i][0] = 1;
		/*
		 * i choose i is always 1 since there is exactly one way 
		 * to choose i elements from a set of i elements
		 * (choose every element in the set)
		 */
		if (i <= r) {
			dp[i][i] = 1; 
		}
	}
	for (ll i = 0; i <= n; i++) {
		for (ll j = 1; j <= min(i, r); j++) {
			if (i != j) {  // skips over the base cases
				// uses the recurrence relation above
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % p;
			}
		}
	}
	return dp[n][r];  // returns nCr modulo p
}

int main() {
    ll n = 10, r = 5, p = 1000;
    cout << binomial(n,r,p) << "\n";
    cout << dp_binomial(n,r,p);
}
