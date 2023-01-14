#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll n; cin >> n;

	ll k;
	
	//Finding the square root using in built function 
	k = sqrt(n); 

	//Finding out k=sqrt(n) using a for loop
	// for (ll i = 1; i <= n; i++) {
	// 	if (i*i <= n) k = i; 
	// 	else break;
	// }

	ll ans = 0; 

	//Calculating the first sum that is for [N/i]<=k
	for (ll i = 1; i <= k; i++){
		ans += ((n / i) - (n / (i + 1)))*i;
	} 

	//Calculating the second sum that is for [N/i]>k
	for (ll i = 1; i <= n / (k + 1); i++){
		ans += (n / i);
	}
	
	cout << ans << "\n"; 
	return 0;
}
