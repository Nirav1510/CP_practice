#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll p, a, b, c, x, y;
    cin >> p >> a >> b >> c >> x >> y;
    ll anar = b + x * a;
    ll chakri = c + y * a;
    cout << p / min(anar, chakri) << endl;
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