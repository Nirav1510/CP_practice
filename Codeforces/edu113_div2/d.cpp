#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll helper(vector<int> &v1, vector<int> &v2)
{
    if (v1.size() <= 1)
    {
        return 0;
    }
    int i = 0, j = 0;
    ll ans = 0, count = 0;
    j = upper_bound(v2.begin(), v2.end(), v1[0]) - v2.begin();
    while (i < v1.size())
    {
        int left = i;
        while (i < v1.size() && (j >= v2.size() || v2[j] > v1[i]))
        {
            i++;
        }
        ll here = i - left;
        ans += (here * (here - 1ll)) / 2ll;
        if (i == v1.size())
            break;
        j = upper_bound(v2.begin(), v2.end(), v1[0]) - v2.begin();
    }
    return ans;
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(n), h(m);
    vector<pair<int, int>> points;
    vector<int> ver, hor;
    map<int, vector<int>> ver1, hor1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> h[i];
    }
    sort(v.begin(), v.end());
    sort(h.begin(), h.end());
    set<int> v1, h1;
    for (auto i : v)
    {
        v1.insert(i);
    }
    for (auto i : h)
    {
        h1.insert(i);
    }
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        points.push_back({a, b});
        if (v1.count(a) && h1.count(b))
        {
            continue;
        }
        if (v1.count(a))
        {
            ver.push_back(b);
            ver1[a].push_back(b);
        }
        if (h1.count(b))
        {
            hor.push_back(a);
            hor1[b].push_back(a);
        }
    }
    sort(ver1.begin(), ver1.end());
    sort(hor1.begin(), hor1.end());
    ll ans = 0;
    ans += helper(ver, h);
    ans += helper(hor, v);

    for (auto &i : ver1)
    {
        sort(i.second.begin(), i.second.end());
        ans -= helper(i.second, h);
    }
    for (auto &i : hor1)
    {
        sort(i.second.begin(), i.second.end());
        ans -= helper(i.second, v);
    }
    cout << ans << endl;
}

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}