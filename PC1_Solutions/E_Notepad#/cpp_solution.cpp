#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        string s; cin >> s;
        ll i = 0;
        set<string> st;
        vector<string> v;
        
        while(i < n-1){
            // checking for the case similar to 'hhh' i.e more than two consecutive same characters
            if(i >= 1 && s[i] == s[i-1] && s[i] == s[i+1]){
                i++;
                if(i > n){
                    break;
                }
                string temp = "";
                temp += s[i];
                temp += s[i+1];
                st.insert(temp);
                v.push_back(temp);
            }
            else{
                string temp = "";
                temp += s[i];
                temp += s[i+1];
                st.insert(temp);
                v.push_back(temp);
            }
            i++;
        }

        if(st.size() == v.size()){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
}