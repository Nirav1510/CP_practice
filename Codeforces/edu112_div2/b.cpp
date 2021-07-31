#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll W, H;
    cin >> W >> H;

    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    ll w, h;
    cin >> w >> h;

    ll a = x1;
    ll b = W - x2;
    ll c = y1;
    ll d = H - y2;

    if (c + d < h && a + b < w)
    {
        cout << -1 << endl;
        return;
    }

    ll adj_hor, adj_ver;

    if (c + d >= h)
        adj_ver = min(max(0ll, h - d), max(0ll, h - c));
    else
        adj_ver = INT_MAX;

    if (a + b >= w)
        adj_hor = min(max(0ll, w - a), max(0ll, w - b));
    else
        adj_hor = INT_MAX;

    std::cout << std::fixed;
    std::cout << std::setprecision(9);

    cout << double(min(adj_hor, adj_ver)) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}