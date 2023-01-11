#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// check if a given number is prime in sqrt(n) time
bool checkPrime(ll n){
    ll i = 2;
    ll k = ceil(sqrt(n));
    // While loop till the square root of n
    while(i<= k){
        if(n % i == 0)
            return false;
        i += 1;
    }
    return true;
}

int main() {
    // driver code
    ll x = 23;
    if(checkPrime(x)) cout << "Prime";
    else cout << "Not Prime";
}