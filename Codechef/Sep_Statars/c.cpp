#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    string s;
    cin >> s;
    ll ans = 0;
    for (char c : s)
    {
        if (ans % 2 == 0)
        {
            if (c == '0')
                ans++;
        }
        else
        {
            if (c == '1')
                ans++;
        }
    }
    cout << ans << endl;
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