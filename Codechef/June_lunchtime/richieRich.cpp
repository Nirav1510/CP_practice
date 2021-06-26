#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, x;
        cin >> a >> b >> x;
        cout << (b - a) / x << endl;
    }
    return 0;
}