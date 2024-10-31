#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, f=0, g=0;
    cin>>n;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            if(i%2==0){
                f++;
            }else{
                g++;
            }
        }
    }

    if(f>g){
        cout<<1<<'\n';
    }else if(f<g){
        cout<<-1<<'\n';
    }else{
        cout<<0<<'\n';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        solve();
    }
    
    return 0;
}