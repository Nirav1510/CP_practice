
#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<string> compare = {
    "abc",
    "bca",
    "cab",
    "bac",
    "cba",
    "acb"};

int n, m;
string s;

vector<int> get(string cmp)
{
    vector<int> ret(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (s[0] != cmp[0])
                ret[1] = 1;
            continue;
        }
        ret[i + 1] = ret[i];
        if (s[i] != cmp[i % 3])
            ret[i + 1]++;
    }
    return ret;
}

void run_case()
{
    cin >> n >> m;
    cin >> s;

    vector<vector<int>> dp(6, vector<int>(n + 1));
    for (int i = 0; i < 6; i++)
    {
        dp[i] = get(compare[i]);
    }

    while (m--)
    {
        int l, r;
        cin >> l >> r;
        cout << min({dp[0][r] - dp[0][l - 1],
                     dp[1][r] - dp[1][l - 1],
                     dp[2][r] - dp[2][l - 1],
                     dp[3][r] - dp[3][l - 1],
                     dp[4][r] - dp[4][l - 1],
                     dp[5][r] - dp[5][l - 1]})
             << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    while (tc--)
        run_case();
    return 0;
}
