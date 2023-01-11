#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = 1e7;

// global vector to store the type of number ( prime or not prime ) upto 10^7
vector<bool> is_prime(N+1, true);

// sieve of eratosthenes
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i <= N; i++) {
        if (is_prime[i] && i * i <= N) {
            for (ll j = i * i; j <= N; j += i)
                is_prime[j] = false;
        }
    }
}

int main() {
    sieve();
    ll x = 29;
    if(is_prime[x]) cout << "Prime";
    else cout << "Not Prime";
}