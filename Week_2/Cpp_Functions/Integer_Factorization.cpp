#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MAXN = 1e7;

// global vector to store the smallest prime factor upto 10^7
vector<ll> spf(MAXN+1);

// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve(){
    spf[1] = 1;
    // marking smallest prime factor for everynumber to be itself.
    for (ll i=2; i<MAXN; i++) spf[i] = i;

    // separately marking spf for every even number as 2
    for (ll i=4; i<MAXN; i+=2) spf[i] = 2;
 
    for (ll i=3; i*i<MAXN; i++){
        // checking if i is prime
        if (spf[i] == i){
            // marking SPF for all numbers divisible by i
            for (ll j=i*i; j<MAXN; j+=i){
                if (spf[j]==j)  spf[j] = i;
            }
        }
    }
}

void integer_factorization(ll n, vector<ll> &factors){
    while(n > 1){
        factors.push_back(spf[n]);
        n /= spf[n];
    }
}

int main() {
    // driver code
    sieve();
    ll n = 100;
    vector<ll> factors;
    integer_factorization(n, factors);
    for(auto x: factors){
        cout << x << " ";
    }
}