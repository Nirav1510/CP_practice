#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll k, n, m;
    cin >> k >> n >> m;
    vector<int> a(n, -1), b(m, -1);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    ll lines = k, p1 = 0, p2 = 0;
    vector<int> ans;
    while (p1 < n && p2 < m)
    {
        if (a[p1] == 0)
        {
            ans.push_back(0);
            lines++;
            p1++;
            continue;
        }
        if (b[p2] == 0)
        {
            ans.push_back(0);
            lines++;
            p2++;
            continue;
        }
        if (a[p1] <= lines)
        {
            ans.push_back(a[p1]);
            p1++;
            continue;
        }
        if (b[p2] <= lines)
        {
            ans.push_back(b[p2]);
            p2++;
            continue;
        }
        cout << -1 << endl;
        return;
    }
    while (p1 < n)
    {
        if (a[p1] > lines)
        {
            cout << -1 << endl;
            return;
        }
        if (a[p1] == 0)
            lines++;
        ans.push_back(a[p1]);
        p1++;
    }
    while (p2 < m)
    {
        if (b[p2] > lines)
        {
            cout << -1 << endl;
            return;
        }
        if (b[p2] == 0)
            lines++;
        ans.push_back(b[p2]);
        p2++;
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