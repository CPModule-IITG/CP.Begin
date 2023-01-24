#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        
        ll sum = 0;
        ll m = 0;
        for(int i=0; i<n; i++)
        {
            sum += a[i];
            //Adding to sum as any monster, greedily, increases health of only one other monster
            sum += b[i];
            m = max(m, b[i]);
        }
        //Since the last monster cannot increase health of any monster, we subtract it from health
        sum -= m;
        cout << sum << endl;
    }
 
    return 0;
}
