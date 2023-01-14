#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n; cin >> n;   
    ll q; cin >> q;   

    string s; cin >> s ;  

    // initializing and declaring startindex variable to 0
    ll startindex = 0;  
    while(q--){
        ll a,b; cin >> a >> b;  // taking the query and storing in a and b
        if(a == 1){
            startindex = (startindex-b);
            if(startindex < 0){
                // handling the case where startindex exceeds the size of string
                startindex += n;
            }
        }
        else if(a == 2){
            // printing the required character
            cout << s[(startindex + b - 1)%n] << "\n";
        }
    }
}