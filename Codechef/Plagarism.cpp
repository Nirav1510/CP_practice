#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, M, k;
        cin >> n >> M >> k;
        vector<int> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        unordered_map<int, int> m;
        for (int i = 0; i < k; i++)
        {
            if (v[i] <= n)
            {
                m[v[i]]++;
            }
        }
        int count = 0;
        for (auto i:m)
        {
            if (i.second>1)
            {
                count++;
            }
        }
        cout<<count<<" ";
        vector<int> ans;
        for (auto i:m)
        {
            if (i.second>1)
            {
                ans.push_back(i.first);
            }
        }
        sort(ans.begin(),ans.end());
        for(auto i:ans){
            cout<<i<<" ";
        }
    }
    return 0;
}