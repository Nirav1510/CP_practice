#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    ll x;
    vector<int> odd;
    vector<int> even;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 1)
        {
            odd.push_back(x);
        }
        else
        {
            even.push_back(x);
        }
    }
    for (auto i : even)
    {
        cout << i << " ";
    }
    for (auto i : odd)
    {
        cout << i << " ";
    }
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