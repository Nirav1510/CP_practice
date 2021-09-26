#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,f;
        cin>>n>>k>>f;
        int ans=0;
        while(n--){
            int s,e;
            cin>>s>>e;
            ans+=e-s;
        }
        if(f-ans>=k){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}