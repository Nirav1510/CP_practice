#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    unordered_map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        ll e;
        cin >> e;
        v[i] = e;
        m[e]++;
    }
    // tle code
    // set<pair<ll,ll>> ss;

    // for(auto it=m.begin();it!=m.end();it++){
    //     ll f=it->first,s=it->second;
    //     ll i=0;
    //     for(ll j=1;j<f/2+1;j++){
    //         ll l=j,h=f-j;
    //         pair<ll,ll> p;
    //         p.first=l;
    //         p.second=h;
    //         if(i<s){
    //             if(ss.find(p)==ss.end()){
    //                 ss.insert(p);
    //             }
    //             i++;
    //         }
    //     }
    // }
    // cout<<ss.size()<<endl;

    int ans = 0;

    for (auto it = m.begin(); it != m.end(); it++)
    {
        ans += (min(it->second, it->first - 1));
    }

    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
