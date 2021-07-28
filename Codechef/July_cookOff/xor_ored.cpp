#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        ll e;
        cin>>e;
        v[i]=e;
    }
    int m = 0;
    int x = 0;


    for( auto i : v){
        m=m|i;
    }

    for(auto i : v){
        x=x|(i^m);
    }
    cout<<m<<" "<<x<<endl;
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