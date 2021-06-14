#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll D, d, p, q;
        cin >> D >> d >> p >> q;

        ll a = D / d;
        ll ans = ((q * d) * (((a - 1) * a) / 2)) + (a * p * d) + (D % d) * (p + (q * a));
        cout << ans << endl;
    }
    return 0;
}