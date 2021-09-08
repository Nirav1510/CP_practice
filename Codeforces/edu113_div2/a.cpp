#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int a=0,b=0;
    int r1,r2;

    for(char c :s){
        if(c=='a') a++;
        else b++;
    }

    for(int i=0;i<n;i++){
        if(i<n-1){
            if((s[i]=='a' && s[i+1]=='b') || (s[i]=='b' && s[i+1]=='a')){
                r1=i+1;
                r2=i+2;
                break;
            }
        }
    }

    if(a==0 || b==0){
        cout<<-1<<" "<<-1<< endl;
    }
    else{
        cout<<r1<<" "<<r2<<endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
