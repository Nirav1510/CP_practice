#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }

    ll temp = a[n - 1];
    ll size = 1;
    for (ll i = n - 2; i >= 0; i--)
    {
        ll t = temp + a[i];
        a[i] = size * a[i] - temp;
        temp = t;
        size++;
    }
    temp = b[n - 1];
    size = 1;
    for (ll i = n - 2; i >= 0; i--)
    {
        ll t = temp + b[i];
        b[i] = size * b[i] - temp;
        temp = t;
        size++;
    }
    ll ans = 0;
    a[n - 1] = 0;
    b[n - 1] = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += a[i];
        ans -= b[i];
    }
    cout << ans / 2 << endl;
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