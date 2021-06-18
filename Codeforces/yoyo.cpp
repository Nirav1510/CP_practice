#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,i,j;
        cin>>n>>m>>i>>j;

        if(n==1 && m==1){
            cout<<1<<" "<<1<<" "<<1<<" "<<1<<" "<<endl;
        }
        i--,j--;
        vector<ll> res;
        vector<vector<ll>> v={{0,0,n-1,0},{n-1,0,n-1,m-1},{n-1,m-1,0,m-1},{0,m-1,0,0},{0,0,n-1,m-1},{0,m-1,n-1,0}};
        ll d=0;
        for(auto k:v){
            vector<ll> temp = k;
            ll tempd= abs(k[0]-i)+abs(k[1]-j)+abs(k[2]-k[0])+abs(k[3]-k[1])+abs(k[2]-i)+abs(k[3]-j);
            if(tempd>d){
                d=tempd;
                res=temp;
            }
        }
        for(auto k:res){
            cout<<k+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}