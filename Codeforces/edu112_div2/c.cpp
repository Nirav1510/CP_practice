#include <bits/stdc++.h>
using namespace std;
#define fl(i, n) for (int i = 0; i < n; i++)
typedef long long int ll;

void solve()
{
    ll n, sum = 0, m = LONG_LONG_MAX, index = -1;
    cin >> n;
    vector<ll> v(n);
    vector<ll> w(n);
    vector<ll> vs(n);
    vector<ll> ws(n);
    fl(i, n)
    {
        cin >> v[i];
        sum += v[i];
        vs[i] = sum;
    }
    fl(i, n)
    {
        cin >> w[i];
    }
    if (n == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            sum += w[i];
            ws[i] = sum;
        }
        // for(auto &aa:vs)
        // cout<<aa<<"\n";
        // cout<<"\n";
        // for(auto &aa:ws)
        // cout<<aa<<"\n";
        // cout<<"\n";
        fl(i, n)
        {
            if (max(ws[0] - ws[i], vs[n - 1] - vs[i]) < m)
            {
                m = max(ws[0] - ws[i], vs[n - 1] - vs[i]);
                index = i;
            }
        }
        // cout<<"index\n"<<index<<"\n";
        // ll ans=max(ws[0]-ws[index],vs[n-1]-vs[index]);
        cout << m << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}