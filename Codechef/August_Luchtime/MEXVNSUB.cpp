#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll sum = (n*(n+1))/2;
    if(sum%2==0){
        cout<<n<<endl;
    }
    else{
        cout<<n-1<<endl;
    }
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}