#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        if (s[0] == '-')
        {
           s.insert(1,"9");
        }
        else{
            if (s[0] - '0' > 1)
            {
                s.insert(0, "1");
            }
            else if (s[0] - '0' == 1)
            {
                s.insert(1, "0");
            }
        }
        for (ll i = 0; i < s.length(); i++)
        {
            cout<<s[i];
        }
        cout<<endl;
        //cout << w << endl;
    }
    return 0;
}