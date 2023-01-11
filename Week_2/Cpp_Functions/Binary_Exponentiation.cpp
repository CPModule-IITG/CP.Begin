#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Binary Exponentiation
ll binpow(ll x, ll n) {
    if (n == 0) return 1;
    ll res = binpow(x, n / 2);
    if (n % 2)
        return res * res * x;
    return res * res;
}

// Modular Binary Exponentiation
ll binpow_mod(ll x, ll n, ll m){
    if (n == 0) return 1;
    ll res = binpow_mod(x, n / 2, m);
    if (n % 2)
        return ( res * res * x ) % m;
    return (res * res) % m;
}

int main() {
    // driver code
    ll x = 23;
    cout << binpow(x,2) << "\n";
    cout << binpow_mod(x,2,10) << "\n"; 
}