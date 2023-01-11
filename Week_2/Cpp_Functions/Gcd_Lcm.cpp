#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// calculate gcd of two numbers using euclids algorithm
ll gcd (ll a, ll b) {
    if (b == 0) return a;
    return gcd (b, a % b);
}

// lcm can be calculated easily once gcd is calculated
ll lcm (ll a, ll b) {
    return a / gcd(a, b) * b;
}

// initialize two variables for storing the values of x and y
// the function returns the gcd of a and b, stores the
// value of x and y in given variables
ll extended_gcd(ll a, ll b, ll& x, ll& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = extended_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}


int main() {
    ll x,y;
    ll g = extended_gcd(10,20,x,y);
    cout << "gcd of 10 and 20 : " << g << "\n";
    cout << "x : " << x << "\n";
    cout << "y : " << y << "\n";   
}
