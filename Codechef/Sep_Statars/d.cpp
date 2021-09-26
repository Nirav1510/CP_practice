#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll a, b;
    cin >> a >> b;
    unordered_map<ll,ll> mp;
    mp[a]++;
    while(true){
        ll lcm = (a*b)/__gcd(a,b);
        ll val = lcm/b;
        a=val;
        if(val==1){
            cout<<"YES"<<endl;
            break;
        }
        if(mp[val]>0){
            cout<<"NO"<<endl;
            break;
        }
        mp[val]++;
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll q;
    cin >> q;
    while (q--)
    {
        solve();
    }
    return 0;
}