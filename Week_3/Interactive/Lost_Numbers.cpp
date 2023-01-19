#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// use flush operation everytime you query something

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll prod[4];
    cout << "? 1 2" << "\n";
    cout << flush;
    cin >> prod[0];
    cout << "? 2 3" << "\n";
    cout << flush;
    cin >> prod[1];
    cout << "? 3 4" << "\n";
    cout << flush;
    cin >> prod[2];
    cout << "? 4 5" << "\n";
    cout << flush;
    cin >> prod[3];

    vector<ll> v = { 4, 8, 15, 16, 23, 42};

    bool good;
    while(true){
        good = true;
        for(ll i = 0; i <= 3; i++){
            good &= (v[i]*v[i+1] == prod[i]);
        }
        if(good){
            break;
        }
        else{
            next_permutation(v.begin(),v.end());
            // It is used to rearrange the elements in the range [first, last) into the next lexicographically greater permutation.
        }
    }

    cout << "! ";
    for(ll i = 0; i <= 5; i++) cout << v[i] << " ";
    cout << "\n"; 
    cout << flush;
    return 0;
}