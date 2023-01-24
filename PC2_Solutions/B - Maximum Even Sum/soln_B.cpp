#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int n;
    cin>>n;
    vector<ll> even, odd;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin>>a;
        if(a%2==0)even.push_back(a);
        else odd.push_back(a);
    }
    //Sorting makes it easier to find the two largest odd and two largest even numbers
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    ll ans=-1;      //If there are no two numbers which sum to an even number, it will stay -1
    ll x=even.size(), y=odd.size();
    if(x>1){
        ans=max(ans, even[x-1]+even[x-2]);
    }
    if(y>1){
        ans=max(ans, odd[y-1]+odd[y-2]);
    }
    cout<<ans;

    return 0;
}
