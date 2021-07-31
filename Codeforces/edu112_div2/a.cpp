#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin>>n;
    if(n<=6){
        cout<<15<<endl;
        return;
    }
    if(n%2==0){
        cout<<(n/2)*5<<endl;
    }
    else{
        cout<<(n/2 + 1)*5<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}