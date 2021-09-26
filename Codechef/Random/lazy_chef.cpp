#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,m,d;
        cin>>x>>m>>d;
        ll ans=min(x*m,x+d);

        cout<<ans<<endl;
    }
    return 0;
}