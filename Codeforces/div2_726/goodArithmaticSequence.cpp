#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll sum=0;
        for(auto i:v){
            sum+=i;
        }
        if(sum==n){
            cout<<0<<endl;
        }
        if(sum<n){
            cout<<1<<endl;
        }
        if(sum>n){
            cout<<sum-n<<endl;
        }
    }
    return 0;  
}