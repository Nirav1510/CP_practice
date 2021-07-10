#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ar(n, -1);
    for (ll i = 0; i < n; i++)
        cin >> ar[i];
    vector<ll> ans;
    ans.push_back(0);
    for (ll i = 1; i < n; i++)
    {
        int cur = 0;
        for (int j = 0; j <= 30; j++)
        {
            if ((ar[i - 1] & (1 << j)) && ((ar[i] & (1 << j)) == 0))
            {
                cur ^= (1 << j);
            }
        }
        ar[i] = (ar[i] ^ cur);
        ans.push_back(cur);
    }
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
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