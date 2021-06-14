#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t, n, a, b, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<pair<ll, ll>> x, y;
        multiset<ll> X, Y;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            x.push_back({a, b});
            y.push_back({b, a});
            X.insert(a);
            Y.insert(b);
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        ll maxh1 = 0;
        ll minh1 = LONG_MAX;
        ll h1 = 0;
        ll h2 = 0;
        ll area = LONG_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            maxh1 = max(maxh1, x[i].second);
            minh1 = min(minh1, x[i].second);
            h1 = maxh1 - minh1;
            auto it = Y.find(x[i].second);
            Y.erase(it);
            h2 = *(Y.rbegin()) - *(Y.begin());
            int narea = (x[i].first - x[0].first) * h1;
            narea += ((x[n - 1].first - x[i + 1].first) * h2);

            area = min(area, narea);
        }
        maxh1 = 0;
        minh1 = LLONG_MAX;
        h1 = 0;
        h2 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            maxh1 = max(maxh1, y[i].second);
            minh1 = min(minh1, y[i].second);
            h1 = maxh1 - minh1;
            auto it = X.find(y[i].second);
            X.erase(it);
            h2 = *(X.rbegin()) - *(X.begin());
            int narea = (y[i].first - y[0].first) * h1;
            narea += ((y[n - 1].first - y[i + 1].first) * h2);

            area = min(area, narea);
        }
        if (area == LLONG_MAX)
            area = 0;
        cout << area << endl;
    }
}