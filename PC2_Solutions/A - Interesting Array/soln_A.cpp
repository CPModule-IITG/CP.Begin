#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    //Iterating over testcases
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        //Input into vector
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        //Sorting to make our counting easier
        sort(v.begin(), v.end());
        ll cnt1=0, cnt2=0;  //Long long datatype used as the answer might go upto 10^10 causing overflow
        for (int i = 0; i < n; i++)
        {
            if(v[i]==v[0])cnt1++;
            else if(v[i]==v[n-1])cnt2++;
        }

        //Handling all equal case
        if(cnt1==n){
            cout<<n*(n-1)<<endl;
        }
        //Answer otherwise
        else{
            cout<<cnt1*cnt2*2<<endl;
        }
        
    }
}
