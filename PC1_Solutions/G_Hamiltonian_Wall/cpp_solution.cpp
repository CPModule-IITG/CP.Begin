#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll t; cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<string> v(2);
        stack<ll> s;
        cin >> v[0];
        cin >> v[1];
        for(ll i = 0; i < n; i++){
            ll x = 0;
            if (!s.empty()){
                x = s.top();
            }
            ll y = 0;
            if (v[0][i] == 'B'){
                y = 1;
            }
            if (v[1][i] == 'B' && v[0][i] == 'W'){
                y = 2;
            }
            if (v[1][i] == 'B' && v[0][i] == 'B'){
                y = 3;
            }
            if (x !=0 ){
                if (x == 3 && y == 3){
                    s.pop();
                }
                else{
                    s.push(y);
                }
            }
            else{
                s.push(y);
            }
        }
        ll chk = 1;
        ll prev = 0;
        if ( !s.empty() ){
            prev = s.top();
            s.pop();
        }
        while (!s.empty()){
            ll curr = s.top();
            s.pop();
            if (prev == 3){
                prev = curr;
            }
            if (curr == 3){
                if (prev == 1){
                    prev = 2;
                }
                else{
                    prev = 1;
                }
            }
            else{
                if (prev == curr){
                    continue;
                }
                else{
                    chk = 0;
                    break;
                }
            }
        }
        if (chk == 1)
            cout << "YES\n" ;
        else
            cout << "NO\n";
    }
}
