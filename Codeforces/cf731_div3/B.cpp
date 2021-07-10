#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    string s;
    cin >> s;
    int l = -1, r = -1, n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            if (l != -1)
            {
                cout << "NO" << endl;
                return;
            }
            l = i;
            r = i;
        }
    }
    if (l == -1)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (l && s[l - 1] == 'a' + i)
        {
            l--;
        }
        else if (r + 1 < n && s[r + 1] == 'a' + i)
        {
            r++;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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