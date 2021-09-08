#include <bits/stdc++.h>

using namespace std;
#define int long long
#define MM 998244353

vector<int> factorial(200200);

int pow(int x, int y, int p)
{
    int res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int inv(int n, int p)
{
    return pow(n, p - 2, p);
}

void calculate()
{
    factorial[0] = 1;
    for (int i = 1; i < 200200; i++)
        factorial[i] = factorial[i - 1] * i % MM;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    int t1 = 1, t2 = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[0])
            t1++;
        else if (arr[i] + 1 == arr[0])
            t2++;
        else
            break;
    }
    if (t1 >= 2)
    {
        cout << factorial[n] % MM << endl;
        return;
    }
    int cc = 1 + t2;
    cout << (factorial[n] * (cc - 1) % MM) * inv(cc, MM) % MM << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    calculate();
    while (t--)
    {
        solve();
    }
    return 0;
}