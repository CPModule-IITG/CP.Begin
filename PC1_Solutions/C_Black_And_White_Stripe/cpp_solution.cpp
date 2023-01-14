#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll k; cin >> k;
        string s; cin >> s;

        // initializing a vector of size n+1 and storing zero at every index for now
        // we will first precompute the vector pref
        vector<ll> pref(n+1,0);
        for(ll i = 1; i<=n; i++){
            // if we get a W, we add 1 to the no of W's before i and store
            if(s[i-1] == 'W'){
                pref[i] = pref[i-1] + 1;
            }
            // else we store no of W's before i
            else{
                pref[i] = pref[i-1];
            }
        }

        // we declare the answer value to 1e6 as we know n <= 2*10^5 so our answer will never exceed 2*10^5
        // Hence, it will be minimized during iteration for sure 
        ll ans = 1e6;

        for(ll i = 1; i <= n-k+1; i++){
            ans = min(ans,pref[i+k-1]-pref[i-1]);
        }

        cout << ans << "\n";
    }
}