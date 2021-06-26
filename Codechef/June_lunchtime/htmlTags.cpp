#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    string s;
    cin >> s;
    ll l = s.length();
    if(l<=3){
        cout << "error" << endl;
        return;
    }
    if (s[0] != '<' || s[1] != '/' || s[l - 1] != '>')
    {
        cout << "error" << endl;
        return;
    }
    for (ll i = 2; i < l - 1; i++)
    {
        if (!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= '0' && s[i] <= '9'))
        {
            cout << "error" << endl;
            return;
        }
    }
    cout << "success" << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}