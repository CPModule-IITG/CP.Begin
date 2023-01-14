#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll k; cin >> k;
        string s; cin >> s;

        // we declare the answer value to 1e6 as we know n <= 2*10^5 so our answer will never exceed 2*10^5
        // Hence, it will be minimized during iteration for sure 
        ll ans = 1e6;

        // temp variable will store the count of W's for the current subarray
        ll temp = 0;

        for(ll i = 0; i<n-k+1; i++){
            if(i == 0){
                for(ll j = 0; j < k; j++){
                    if(s[j] == 'W'){
                        temp++;
                    }
                }
                ans = min(ans,temp);
            }
            else{
                if(s[i-1] == 'W'){
                    temp--;
                }
                if(s[i+k-1] == 'W'){
                    temp++;
                }
                ans = min(ans,temp);
            }
        }

        cout << ans << "\n";
    }
}