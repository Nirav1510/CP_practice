#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    ll m = -1;
    for(ll i=0;i<n;i++){
        ll x;
        cin >> x ;
        v[i] = x;
        m = max(m,x);
    }
    ll ans=0;
    for(ll i=k-1;i<n;i++){
        if(v[i]==m){
            ans+=(n-i);
        }
    }
    cout<<ans<<endl;
    
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}