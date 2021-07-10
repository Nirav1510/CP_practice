#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll xa,ya;
        cin>>xa>>ya;
        ll xb,yb;
        cin>>xb>>yb;
        ll xf,yf;
        cin>>xf>>yf;

        if(xa==xb && xa==xf && ((ya<yf && yf<yb) || (ya>yf && yf>yb))){
            cout<<abs(yb-ya)+2<<endl;
        }
        else if(ya==yb && ya==yf && ((xa<xf && xf<xb) || (xa>xf && xf>xb))){
            cout<<abs(xb-xa)+2<<endl;
        }
        else{
            cout<<abs(yb-ya)+abs(xb-xa)<<endl;
        }
    }
    return 0;
}
