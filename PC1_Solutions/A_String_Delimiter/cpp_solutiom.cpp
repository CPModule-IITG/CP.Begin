#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n; cin >> n;   
    string s; cin >> s ;  

    // initializing and declaring variable var to store the count of " 
    ll var = 0;     

    for(int i = 0; i < n; i++){
        // if var is even and character is , then change it to .
        if(var%2 == 0 && s[i] == ','){
            s[i] = '.';
        }
        // if character is " increase var by 1
        else if(s[i] == '"'){
            var++;
        }
    }

    cout << s ;
}