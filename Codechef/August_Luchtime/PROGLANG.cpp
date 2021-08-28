#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll a,b,a1,b1,a2,b2;
    cin>>a>>b>>a1>>b1>>a2>>b2;
    if((a==a1 || a==b1) && (b==a1 || b==b1)){
        cout<<1<<endl;
        return;
    }
    if((a==a2 || a==b2) && (b==a2 || b==b2)){
        cout<<2<<endl;
        return;
    }
    cout<<0<<endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}