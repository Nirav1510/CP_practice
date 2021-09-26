#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,p,x,y;
    cin>>n>> p >> x >> y;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll cx=0,cy=0;
    for(int i=0;i<p;i++){
        v[i]==0 ? cx++ : cy++;
    }
    cout<< cx*x+cy*y <<endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll q;
    cin >> q;
    while (q--)
    {
        solve();
    }
    return 0;
}