#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        vector<int> a(n), b(m);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        vector<int> s(n, -3);
        vector<int> t(n, -3);

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                s[i] = 0;
            }
        }
        s[0] = 0;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == -3)
            {
                if (i != 1)
                {
                    if (s[i - 1] == -1)
                    {
                        s[i] = -1;
                    }
                    else
                    {
                        s[i] = s[i - 1] + 1;
                    }
                }
                else
                {
                    if (a[0] == 1)
                    {
                        s[i] = 1;
                    }
                    else
                    {
                        s[i] = -1;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 2)
            {
                t[i] = 0;
            }
        }
        t[0] = 0;

        if (a[n - 1] == 0)
        {
            t[n - 1] = -1;
        }
        else
        {
            if (a[n - 1] != 1)
            {
                t[n - 1] = 0;
            }
            else
            {
                t[n - 1] = -1;
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (t[i] == -3)
            {
                if (t[i + 1] == -1)
                {
                    t[i] = -1;
                }
                else
                {
                    t[i] = t[i + 1] + 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 2)
            {
                s[i] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                t[i] = 0;
            }
        }
        vector<int> v(n, -3);
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                v[i] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == -3)
            {
                if (s[i] == -1 && t[i] == -1)
                {
                    v[i] = -1;
                }
                else if (s[i] != -1 && t[i] == -1)
                {
                    v[i] = s[i];
                }
                else if (s[i] == -1 && t[i] != -1)
                {
                    v[i] = t[i];
                }
                else
                {
                    v[i] = min(s[i], t[i]);
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            cout << v[b[i] - 1] << " ";
        }
        cout << endl;
    }
    return 0;
}