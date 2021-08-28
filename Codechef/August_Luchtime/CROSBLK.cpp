#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll f = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i > 0 && v[0] < v[i])
        {
            f = 1;
        }
    }
    if (f == 1)
    {
        cout << -1 << endl;
    }
    else if (n == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        vector<ll> l(n, -1);
        stack<ll> s;

        s.push(n - 1);

        for (ll i = n - 2; i >= 0; i--)
        {
            while (!s.empty() && v[s.top()] < v[i])
            {
                l[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while (!s.empty())
        {
            l[s.top()] = -1;
            s.pop();
        }
        ll ind = n - 1;
        ll ans = 0;
        if (l[n - 1] == -1)
        {
            cout << 1 << endl;
        }
        else
        {
            while (ind != 0)
            {
                ans++;
                if (ind == -1)
                {
                    ans--;
                    break;
                }
                ind = l[ind];
            }
            cout << ans << endl;
        }
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