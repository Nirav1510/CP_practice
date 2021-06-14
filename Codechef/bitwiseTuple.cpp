#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll mod = 1e9 + 7;

ll power(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll ans = power(power(2, n) - 1, m);
        cout << ans % mod << endl;
    }
    return 0;
}