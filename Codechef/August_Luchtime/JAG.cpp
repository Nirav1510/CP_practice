#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int n ; 
       cin>>n ;
       vector<int> v(n) ;
       int res = 0 ;
       unordered_map<int , int> mp ;
       for(int i = 0 ; i < n ; i++){
           cin>>v[i] ;
           mp[v[i]-i]++ ;
           res = max(res , mp[v[i]-i]) ;
       }
       
       cout<<res<<endl ;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}