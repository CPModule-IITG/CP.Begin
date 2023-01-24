#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < m; i++)
        {
            cin>>v[0];      //Changing the least valued element on each iteration
            sort(v.begin(), v.end());
        }
        ll sum=0;   //Sum may exceed integer limits
        for (int i = 0; i < n; i++)
        {
            sum+=v[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}
