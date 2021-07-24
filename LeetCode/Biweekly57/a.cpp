#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool areOccurrencesEqual(string s)
{
    if (s.length() <= 1)
        return true;
    unordered_map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    vector<int> v;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        v.push_back(it->second);
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] != v[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "sdasdasd";
    bool flag = areOccurrencesEqual(s);
    cout << flag << endl;

    return 0;
}