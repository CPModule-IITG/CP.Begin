#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n; cin >> n;
    if(n%2 == 0){
        for(ll i = 1; i < n/2 + 1; i++){
            cout << 2*i << " " << 2*i - 1 << " ";
        }
    }
    else{
        cout << -1;
    }
}